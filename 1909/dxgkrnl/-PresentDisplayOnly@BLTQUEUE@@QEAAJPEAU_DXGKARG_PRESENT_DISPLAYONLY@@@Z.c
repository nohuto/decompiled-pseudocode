/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C027D850
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C4BD0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C024F3D4 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C027B5E4 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00045D4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001B8E0 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01FB50C (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C023E680 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C027E384 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C027EA4C (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(BLTQUEUE *this, struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  int v7; // ebx
  DXGDODPRESENT *v8; // rax
  const GUID *v9; // r8
  unsigned __int8 v10; // bp
  int v11; // edx
  __int64 v12; // r14
  NTSTATUS v13; // eax
  _BYTE v15[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (BLTQUEUE *)((char *)this + 632), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v16, Current);
  if ( *(_DWORD *)(*(_QWORD *)this + 132LL) )
  {
    v7 = -1073741823;
  }
  else
  {
    KeClearEvent((PRKEVENT)((char *)this + 536));
    a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 24) + 64LL) + 40LL) + 28LL) < 0x3007u));
    v8 = *(DXGDODPRESENT **)this;
    *((_DWORD *)this + 156) = 1;
    v10 = 0;
    v7 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v8 + 11), a2, v9);
    v11 = 259;
    if ( v7 >= 0 )
    {
      if ( g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
      {
        v10 = 1;
        v7 = v11;
      }
      else
      {
        v10 = 0;
      }
    }
    if ( v7 == v11 )
    {
      v7 = 258;
      v12 = 10000000LL * (unsigned int)dword_1C00A2D68;
      Timeout.QuadPart = -10000000LL * (unsigned int)dword_1C00A2D68;
      while ( 1 )
      {
        v13 = KeWaitForSingleObject((char *)this + 536, Executive, 0, 0, &Timeout);
        *((_DWORD *)this + 156) = 0;
        if ( !v10
          && !*(_DWORD *)(*(_QWORD *)this + 132LL)
          && (v13 != 258 || KeReadStateEvent((PRKEVENT)((char *)this + 536))) )
        {
          break;
        }
        if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                             *(_QWORD *)this,
                             (v10 ^ 1u) + 4,
                             *((unsigned int *)this + 24),
                             v12) != 1 )
          goto LABEL_15;
      }
      v7 = 0;
    }
    else
    {
LABEL_15:
      KeSetEvent((PRKEVENT)((char *)this + 536), 0, 0);
    }
  }
  BLTQUEUE::SetVisibilityIfDeferred(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v7;
}
