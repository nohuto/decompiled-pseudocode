/*
 * XREFs of ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x18007079C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessAddBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_ADDBINDING *a3)
{
  struct CResource *ResourceWithoutType; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8
  struct CResource *v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v7 = ResourceWithoutType;
  if ( !ResourceWithoutType )
  {
    v10 = -2003303421;
    v15 = 30;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v10, v15);
    return (unsigned int)v10;
  }
  *(_QWORD *)&v16 = ResourceWithoutType;
  v5 = (_QWORD *)((char *)this + 64);
  DWORD2(v16) = *(_DWORD *)(v6 + 12);
  v8 = *((unsigned int *)this + 22);
  v9 = v8 + 1;
  v10 = (int)v8 + 1 < (unsigned int)v8 ? 0x80070216 : 0;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v10, 0xB5u);
  }
  else if ( v9 <= *((_DWORD *)this + 21) )
  {
    *(_OWORD *)(*v5 + 16 * v8) = v16;
    *((_DWORD *)this + 22) = v9;
  }
  else
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 16, 1, &v16);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v11, 0xC0u);
  }
  if ( v10 < 0 )
  {
    v15 = 37;
    goto LABEL_14;
  }
  (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v7 + 8LL))(v7);
  v12 = (*(__int64 (__fastcall **)(CBaseAnimation *, __int128 *))(*(_QWORD *)this + 152LL))(this, &v16);
  v10 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2Bu);
  return (unsigned int)v10;
}
