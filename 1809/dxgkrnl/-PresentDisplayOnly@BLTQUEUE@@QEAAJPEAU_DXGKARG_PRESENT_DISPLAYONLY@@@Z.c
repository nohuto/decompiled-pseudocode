/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0247850
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C021A774 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C02459FC (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000F778 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001A748 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01CC948 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C020B3F0 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C0248224 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C0248CBC (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(BLTQUEUE *this, struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  struct DXGPROCESS *Current; // rax
  int v5; // ebx
  DXGDODPRESENT *v6; // rax
  const GUID *v7; // r8
  unsigned __int8 v8; // bp
  int v9; // edx
  __int64 v10; // r14
  NTSTATUS v11; // eax
  _BYTE v13[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (BLTQUEUE *)((char *)this + 632), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v14, Current);
  if ( *(_DWORD *)(*(_QWORD *)this + 132LL) )
  {
    v5 = -1073741823;
  }
  else
  {
    KeClearEvent((PRKEVENT)((char *)this + 536));
    a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 24) + 64LL) + 40LL) + 28LL) < 0x3007u));
    v6 = *(DXGDODPRESENT **)this;
    *((_DWORD *)this + 156) = 1;
    v8 = 0;
    v5 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v6 + 11), a2, v7);
    v9 = 259;
    if ( v5 >= 0 )
    {
      if ( g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
      {
        v8 = 1;
        v5 = v9;
      }
      else
      {
        v8 = 0;
      }
    }
    if ( v5 == v9 )
    {
      v5 = 258;
      v10 = 10000000LL * (unsigned int)dword_1C008ED68;
      Timeout.QuadPart = -10000000LL * (unsigned int)dword_1C008ED68;
      while ( 1 )
      {
        v11 = KeWaitForSingleObject((char *)this + 536, Executive, 0, 0, &Timeout);
        *((_DWORD *)this + 156) = 0;
        if ( !v8
          && !*(_DWORD *)(*(_QWORD *)this + 132LL)
          && (v11 != 258 || KeReadStateEvent((PRKEVENT)((char *)this + 536))) )
        {
          break;
        }
        if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                             *(_QWORD *)this,
                             (v8 ^ 1u) + 4,
                             *((unsigned int *)this + 24),
                             v10) != 1 )
          goto LABEL_15;
      }
      v5 = 0;
    }
    else
    {
LABEL_15:
      KeSetEvent((PRKEVENT)((char *)this + 536), 0, 0);
    }
  }
  BLTQUEUE::SetVisibilityIfDeferred(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return (unsigned int)v5;
}
