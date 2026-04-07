/*
 * XREFs of ??1CWindowList@@UEAA@XZ @ 0x18008898C
 * Callers:
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x180078940 (--_ECWindowList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B2F4 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180079E4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180088DD0 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x180088E94 (--_GCWindowArrangementTransition@@QEAAPEAXI@Z.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18008906C (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 */

void __fastcall CWindowList::~CWindowList(CWindowList *this)
{
  unsigned int v2; // edx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CLoginTransition *v6; // rcx
  struct CWindowData **v7; // rax
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  PVOID v15; // rax
  struct wil::details::wnf_subscription_state_base *v16; // rdx
  _QWORD *v17; // rdi
  CBaseObject *v18; // rcx
  CWindowArrangementTransition *v19; // rcx
  wil::details *v20; // rcx
  char *v21; // rcx
  PVOID v22; // rax
  PVOID v23; // rax
  PVOID v24; // rax
  PVOID v25; // [rsp+40h] [rbp+20h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+28h] BYREF

  v25 = 0LL;
  *(_QWORD *)this = &CWindowList::`vftable';
  CWindowList::CommitAndCloseResizeCompSyncObject(this);
  v3 = (CBaseObject *)*((_QWORD *)this + 62);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 63);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 66);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CLoginTransition *)*((_QWORD *)this + 65);
  if ( v6 )
  {
    CLoginTransition::`scalar deleting destructor'(v6, v2);
    *((_QWORD *)this + 65) = 0LL;
  }
  while ( !RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 280)) )
  {
    RestartKey = 0LL;
    v7 = (struct CWindowData **)RtlEnumerateGenericTableWithoutSplaying(
                                  (PRTL_GENERIC_TABLE)((char *)this + 280),
                                  &RestartKey);
    CWindowList::ImmediateDestroySprite(this, *v7);
  }
  while ( 1 )
  {
    v15 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &v25);
    v17 = v15;
    if ( !v15 )
      break;
    v8 = (CBaseObject *)*((_QWORD *)v15 + 1);
    if ( v8 )
      CBaseObject::Release(v8);
    v9 = (CBaseObject *)v17[2];
    if ( v9 )
      CBaseObject::Release(v9);
    v10 = (CBaseObject *)v17[3];
    if ( v10 )
      CBaseObject::Release(v10);
    v11 = (CBaseObject *)v17[4];
    if ( v11 )
      CBaseObject::Release(v11);
    v12 = (CBaseObject *)v17[5];
    if ( v12 )
      CBaseObject::Release(v12);
    v13 = (CBaseObject *)v17[6];
    if ( v13 )
      CBaseObject::Release(v13);
    v14 = (CBaseObject *)v17[7];
    if ( v14 )
      CBaseObject::Release(v14);
  }
  v18 = (CBaseObject *)*((_QWORD *)this + 10);
  if ( v18 )
    CBaseObject::Release(v18);
  v19 = (CWindowArrangementTransition *)*((_QWORD *)this + 64);
  if ( v19 )
  {
    CWindowArrangementTransition::`scalar deleting destructor'(v19, (unsigned int)v16);
    *((_QWORD *)this + 64) = 0LL;
  }
  v20 = (wil::details *)*((_QWORD *)this + 74);
  if ( v20 )
    wil::details::delete_wnf_subscription_state(v20, v16);
  v21 = (char *)*((_QWORD *)this + 73);
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v21);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 67);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 58);
  while ( 1 )
  {
    v25 = 0LL;
    v22 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 392), &v25);
    if ( !v22 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 392), v22);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 44);
  while ( 1 )
  {
    v25 = 0LL;
    v23 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 280), &v25);
    if ( !v23 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 280), v23);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 31);
  while ( 1 )
  {
    v25 = 0LL;
    v24 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &v25);
    if ( !v24 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v24);
  }
}
