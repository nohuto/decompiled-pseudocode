/*
 * XREFs of EtwEventWriteStartScenario @ 0x18008B6A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     sub_1800541F8 @ 0x1800541F8 (sub_1800541F8.c)
 *     EtwEventEnabled @ 0x180054250 (EtwEventEnabled.c)
 *     EtwEventActivityIdControl @ 0x180066190 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009FE70 (ZwTraceControl.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall EtwEventWriteStartScenario(unsigned __int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v10; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-38h] BYREF

  v10 = 0;
  if ( a2 )
  {
    if ( EtwEventEnabled(a1, (__int64)a2) )
    {
      memset(v11, 0, sizeof(v11));
      v8 = sub_1800541F8(a1, v11);
      if ( !v8 )
      {
        *(_OWORD *)&v11[1] = *a2;
        *(struct _GUID *)&v11[3] = NtCurrentTeb()->ActivityId;
        if ( _mm_cvtsi128_si32(*(__m128i *)&v11[3])
          || HIDWORD(v11[3])
          || LOBYTE(v11[4])
          || __PAIR16__(BYTE1(v11[4]), 0) != BYTE2(v11[4])
          || *(_WORD *)((char *)&v11[4] + 3)
          || __PAIR16__(BYTE5(v11[4]), 0) != BYTE6(v11[4])
          || HIBYTE(v11[4])
          || (v8 = EtwEventActivityIdControl(3, (struct _GUID *)&v11[3])) == 0
          && (v8 = EtwEventActivityIdControl(2, (struct _GUID *)&v11[3])) == 0 )
        {
          LODWORD(v11[5]) = 10;
          v8 = EtwEventWrite(a1, (int)a2, a3, a4);
          ZwTraceControl(13LL, v11, 48LL, 0LL, 0, &v10);
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
  return v8;
}
