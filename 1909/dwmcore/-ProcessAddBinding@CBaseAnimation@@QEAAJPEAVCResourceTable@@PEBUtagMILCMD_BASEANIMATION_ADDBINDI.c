/*
 * XREFs of ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800D110C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007CBC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessAddBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEANIMATION_ADDBINDING *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  struct CResource *v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  signed int v11; // eax
  unsigned int v12; // ebx
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v7 = ResourceWithoutType;
  if ( !ResourceWithoutType )
  {
    v12 = -2003303421;
    v16 = 28;
    goto LABEL_14;
  }
  *(_QWORD *)&v17 = ResourceWithoutType;
  v8 = (_QWORD *)((char *)this + 64);
  DWORD2(v17) = *(_DWORD *)(v6 + 12);
  v9 = *((unsigned int *)this + 22);
  v10 = v9 + 1;
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, 0x80070216, 0xB8u, 0LL);
LABEL_6:
    if ( (v12 & 0x80000000) == 0 )
      goto LABEL_7;
    v16 = 35;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v12, v16, 0LL);
    return v12;
  }
  if ( v10 > *((_DWORD *)this + 21) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v8, 16, 1, &v17);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v11, 0xC3u, 0LL);
    goto LABEL_6;
  }
  *(_OWORD *)(*v8 + 16 * v9) = v17;
  *((_DWORD *)this + 22) = v10;
LABEL_7:
  (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v7 + 8LL))(v7);
  v13 = (*(__int64 (__fastcall **)(CBaseAnimation *, __int128 *))(*(_QWORD *)this + 192LL))(this, &v17);
  v12 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x29u, 0LL);
  return v12;
}
