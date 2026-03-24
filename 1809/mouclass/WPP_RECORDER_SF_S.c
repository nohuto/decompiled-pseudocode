/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0004B78
 * Callers:
 *     MouCreateClassObject @ 0x1C000C410 (MouCreateClassObject.c)
 *     MouseAddDeviceEx @ 0x1C000CD54 (MouseAddDeviceEx.c)
 *     MouConfiguration @ 0x1C000FA00 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001760 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6)
{
  __int64 v6; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rbp
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  const wchar_t *v16; // rcx
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+70h] [rbp+8h]

  v20 = a1;
  v6 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v11 = 10LL;
  v12 = a6;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      &WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids,
      a4,
      v16,
      v15,
      0LL);
    a1 = v20;
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v11 = 2 * v6 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v12 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, a2, a3, &WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids, v19, v12, v11, 0LL);
}
