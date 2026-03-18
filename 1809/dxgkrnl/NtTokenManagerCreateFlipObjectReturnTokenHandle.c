/*
 * XREFs of NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0052B70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C0016364 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C0052A84 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C00591A4 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectReturnTokenHandle(void *a1, unsigned __int64 *a2, HANDLE *a3)
{
  int ConsumerTokenOperation; // edi
  unsigned __int64 v7; // r15
  ULONG64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // r9
  struct DXGGLOBAL *v11; // rax
  HANDLE Handle; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-90h]
  struct CFlipTokenOperation *v15[2]; // [rsp+60h] [rbp-88h] BYREF
  char v16; // [rsp+70h] [rbp-78h]
  __int64 v17; // [rsp+78h] [rbp-70h]
  __int64 v18; // [rsp+80h] [rbp-68h]
  int v19; // [rsp+88h] [rbp-60h] BYREF
  __int64 v20; // [rsp+90h] [rbp-58h]
  __int64 v21; // [rsp+98h] [rbp-50h]
  int v22; // [rsp+A0h] [rbp-48h]
  __int64 v23; // [rsp+A8h] [rbp-40h]
  __int64 v24; // [rsp+B0h] [rbp-38h]
  __int64 v25; // [rsp+108h] [rbp+20h] BYREF

  ConsumerTokenOperation = 0;
  Handle = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  v25 = 0LL;
  *(_OWORD *)v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v18 = 0LL;
  KeEnterCriticalRegion();
  if ( a3 && a2 )
  {
    v8 = (ULONG64)(a2 + 1);
    if ( a2 + 1 < a2 || v8 > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v14 = *a2;
  }
  else
  {
    ConsumerTokenOperation = -1073741811;
  }
  if ( ConsumerTokenOperation >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    ConsumerTokenOperation = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)Global + 2541) + 152LL))(
                               0x80000000LL,
                               &v25);
    if ( ConsumerTokenOperation >= 0 )
    {
      ConsumerTokenOperation = FlipManagerCreateConsumerTokenOperation(a1, v7, v15);
      if ( ConsumerTokenOperation >= 0 )
      {
        v19 = 48;
        v20 = 0LL;
        v22 = 0;
        v21 = 0LL;
        v23 = v25;
        v24 = 0LL;
        ConsumerTokenOperation = DxgkCompositionObject::Create(
                                   0LL,
                                   (__int64)&v19,
                                   3u,
                                   v10,
                                   5,
                                   152,
                                   (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
                                   (__int64)v15,
                                   &Handle);
        if ( ConsumerTokenOperation >= 0 )
        {
          v8 = (ULONG64)(a3 + 1);
          if ( a3 + 1 < a3 || v8 > MmUserProbeAddress )
          {
            v8 = MmUserProbeAddress;
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          *a3 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( v25 )
  {
    v11 = DXGGLOBAL::GetGlobal(v8);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v11 + 2541) + 272LL))(v25);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)v15);
  return (unsigned int)ConsumerTokenOperation;
}
