/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C0015910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C0016364 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        char *Src,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  ULONG64 v6; // r14
  int v8; // ebx
  PVOID PoolWithTag; // rsi
  ULONG64 v10; // rcx
  unsigned __int64 v11; // kr00_8
  size_t v12; // r14
  SIZE_T v13; // rax
  struct DXGGLOBAL *Global; // rax
  _QWORD *v15; // rdx
  struct DXGGLOBAL *v16; // rax
  int v18; // [rsp+90h] [rbp-68h] BYREF
  __int64 v19; // [rsp+98h] [rbp-60h]
  __int64 v20; // [rsp+A0h] [rbp-58h]
  int v21; // [rsp+A8h] [rbp-50h]
  __int64 v22; // [rsp+B0h] [rbp-48h]
  __int64 v23; // [rsp+B8h] [rbp-40h]
  __int64 v24; // [rsp+C0h] [rbp-38h]
  __int64 v25; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+108h] [rbp+10h]
  int v27; // [rsp+110h] [rbp+18h]

  v27 = a3;
  v26 = a2;
  v6 = a2;
  v8 = 0;
  PoolWithTag = 0LL;
  v25 = 0LL;
  KeEnterCriticalRegion();
  if ( !Src || !(_DWORD)v6 || !v27 || !a4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v10 = v6;
    v11 = v6;
    v24 = (v6 * (unsigned __int128)0x18uLL) >> 64;
    v12 = 24 * v6;
    if ( is_mul_ok(v11, 0x18uLL) )
    {
      v8 = 0;
    }
    else
    {
      v12 = -1LL;
      v8 = -1073741675;
    }
    if ( v8 >= 0 )
    {
      v13 = 24 * v10;
      if ( !is_mul_ok(v10, 0x18uLL) )
        v13 = -1LL;
      v10 = 1LL;
      if ( !v13 )
        v13 = 1LL;
      if ( v13 <= 0x7FFFFFFF )
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x62634D54u);
      if ( !PoolWithTag )
        v8 = -1073741801;
      if ( v8 >= 0 )
      {
        if ( &Src[v12] < Src || (unsigned __int64)&Src[v12] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithTag, Src, v12);
        v10 = a4 + 8;
        v8 = 0;
      }
    }
    if ( v8 >= 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v10);
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)Global + 2541) + 152LL))(0x80000000LL, &v25);
      if ( v8 >= 0 )
      {
        v18 = 48;
        v19 = 0LL;
        v21 = 0;
        v20 = 0LL;
        v22 = v25;
        v23 = 0LL;
        v8 = DxgkCompositionObject::Create(0LL, &v18, 3LL);
        if ( v8 >= 0 )
        {
          v15 = (_QWORD *)a5;
          if ( a5 )
          {
            v10 = a5 + 8;
            if ( a5 + 8 < a5 || v10 > MmUserProbeAddress )
            {
              v10 = MmUserProbeAddress;
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            *v15 = -1LL;
          }
          else
          {
            v8 = -1073741811;
          }
        }
      }
    }
  }
  if ( v25 )
  {
    v16 = DXGGLOBAL::GetGlobal(v10);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v16 + 2541) + 272LL))(v25);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
