/*
 * XREFs of EtwpCrimsonStackWalkApc @ 0x14032BF90
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCrimsonStackWalkApc(PVOID P, _QWORD *a2, _WORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v10; // [rsp+90h] [rbp-80h]
  _OWORD v11[27]; // [rsp+A0h] [rbp-70h] BYREF

  memset(v11, 0, 0x1A8uLL);
  *a2 = 0LL;
  ExFreePoolWithTag(P, 0);
  LODWORD(v10) = *a4;
  HIDWORD(v10) = *a5;
  memset(v11, 0, 0x1A8uLL);
  *(_QWORD *)&v11[5] = v10;
  *((_QWORD *)&v11[24] + 1) = EtwpHostSiloState;
  WORD3(v11[8]) = *a3;
  *(GUID *)((char *)&v11[2] + 8) = EventTracingProvGuid;
  LODWORD(v11[8]) = 1;
  DWORD2(v11[8]) = 68;
  BYTE4(v11[8]) = -1;
  v11[9] = _mm_load_si128((const __m128i *)&_xmm);
  return EtwpEventWriteFull(
           (__int64)v11,
           1u,
           0,
           0,
           ETW_EVENT_USER_STACK_TRACE,
           0,
           0,
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
