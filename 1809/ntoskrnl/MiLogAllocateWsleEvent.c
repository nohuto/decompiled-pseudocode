/*
 * XREFs of MiLogAllocateWsleEvent @ 0x1402A7EA4
 * Callers:
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1400A7D70 (MiIdentifyPfnWrapper.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiFillPageExtraInfo @ 0x1402A7E7C (MiFillPageExtraInfo.c)
 */

void __fastcall MiLogAllocateWsleEvent(ULONG_PTR a1, int a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // r8
  unsigned __int16 v8; // ax
  unsigned __int64 v9[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 *v10; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v6 = 32;
  memset(v9, 0, sizeof(v9));
  MiIdentifyPfnWrapper(a1, (__int64)v9, v7);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    MiFillPageExtraInfo(&v9[3], a2, a3);
    v8 = 642;
  }
  else
  {
    v8 = 630;
    v6 = 24;
  }
  v12 = 0;
  v10 = v9;
  v11 = v6;
  EtwTraceKernelEvent((__int64)&v10, 1u, 0x28000001u, v8, 0x11401B02u);
}
