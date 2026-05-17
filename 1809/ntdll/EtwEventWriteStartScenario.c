/*
 * XREFs of EtwEventWriteStartScenario @ 0x18008F130
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x18004DC20 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x180068844 (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x180068890 (EtwEventEnabled.c)
 *     EtwEventActivityIdControl @ 0x18006DBD0 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A3A50 (NtTraceControl.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwEventWriteStartScenario(unsigned __int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  unsigned int KmRegHandle; // ebx
  int v10; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-38h] BYREF

  v10 = 0;
  if ( a2 )
  {
    if ( EtwEventEnabled(a1, (__int64)a2) )
    {
      memset(v11, 0, sizeof(v11));
      KmRegHandle = EtwpGetKmRegHandle(a1, v11);
      if ( !KmRegHandle )
      {
        *(_OWORD *)&v11[1] = *a2;
        *(_GUID *)&v11[3] = NtCurrentTeb()->ActivityId;
        if ( _mm_cvtsi128_si32(*(__m128i *)&v11[3])
          || HIDWORD(v11[3])
          || LOBYTE(v11[4])
          || __PAIR16__(BYTE1(v11[4]), 0) != BYTE2(v11[4])
          || *(_WORD *)((char *)&v11[4] + 3)
          || __PAIR16__(BYTE5(v11[4]), 0) != BYTE6(v11[4])
          || HIBYTE(v11[4])
          || (KmRegHandle = EtwEventActivityIdControl(3, (_GUID *)&v11[3])) == 0
          && (KmRegHandle = EtwEventActivityIdControl(2, (_GUID *)&v11[3])) == 0 )
        {
          LODWORD(v11[5]) = 10;
          KmRegHandle = EtwEventWrite(a1, (int)a2, a3, a4);
          NtTraceControl(13LL, v11, 48LL, 0LL, 0, &v10);
        }
      }
    }
    else
    {
      return 6;
    }
  }
  else
  {
    return 87;
  }
  return KmRegHandle;
}
