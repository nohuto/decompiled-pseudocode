/*
 * XREFs of NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0059440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C0018D28 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C0059354 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C0060254 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectReturnTokenHandle(void *a1, unsigned __int64 *a2, HANDLE *a3)
{
  int ConsumerTokenOperation; // edi
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // r9
  struct DXGGLOBAL *v12; // rax
  HANDLE Handle; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-90h]
  struct CFlipTokenOperation *v16[2]; // [rsp+60h] [rbp-88h] BYREF
  char v17; // [rsp+70h] [rbp-78h]
  __int64 v18; // [rsp+78h] [rbp-70h]
  __int64 v19; // [rsp+80h] [rbp-68h]
  _QWORD v20[12]; // [rsp+88h] [rbp-60h] BYREF
  __int64 v21; // [rsp+108h] [rbp+20h] BYREF

  ConsumerTokenOperation = 0;
  Handle = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  v21 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  memset(v20, 0, 0x30uLL);
  KeEnterCriticalRegion();
  if ( a3 && a2 )
  {
    v9 = (ULONG64)(a2 + 1);
    if ( a2 + 1 < a2 || v9 > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v15 = *a2;
  }
  else
  {
    ConsumerTokenOperation = -1073741811;
  }
  if ( ConsumerTokenOperation >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v9, v8);
    ConsumerTokenOperation = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)Global + 38000) + 192LL))(
                               0x80000000LL,
                               &v21);
    if ( ConsumerTokenOperation >= 0 )
    {
      ConsumerTokenOperation = FlipManagerCreateConsumerTokenOperation(a1, v7, v16);
      if ( ConsumerTokenOperation >= 0 )
      {
        LODWORD(v20[0]) = 48;
        memset(&v20[1], 0, 20);
        v20[4] = v21;
        v20[5] = 0LL;
        ConsumerTokenOperation = DxgkCompositionObject::Create(
                                   0LL,
                                   (__int64)v20,
                                   3u,
                                   v11,
                                   5,
                                   152,
                                   (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
                                   (__int64)v16,
                                   &Handle);
        if ( ConsumerTokenOperation >= 0 )
        {
          v9 = (ULONG64)(a3 + 1);
          if ( a3 + 1 < a3 || v9 > MmUserProbeAddress )
          {
            v9 = MmUserProbeAddress;
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          *a3 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( v21 )
  {
    v12 = DXGGLOBAL::GetGlobal(v9, v8);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v12 + 38000) + 312LL))(v21);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)v16);
  return (unsigned int)ConsumerTokenOperation;
}
