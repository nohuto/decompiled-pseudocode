/*
 * XREFs of ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x1803CCB54
 * Callers:
 *     ??1AppResizeAcc@@EEAA@XZ @ 0x1803CC550 (--1AppResizeAcc@@EEAA@XZ.c)
 *     ?EndDrag@AppResizeAcc@@UEAAX_N@Z @ 0x1803CC840 (-EndDrag@AppResizeAcc@@UEAAX_N@Z.c)
 *     ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x1803CD060 (-SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z.c)
 *     ?StartDrag@AppResizeAcc@@UEAAXXZ @ 0x1803CD100 (-StartDrag@AppResizeAcc@@UEAAXXZ.c)
 *     ?v_WndProc@AppResizeAcc@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803CD1E0 (-v_WndProc@AppResizeAcc@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@PEAUUiaPropertyChangedEventArgs@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardCompareHelper@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardMergeHelper@PEAUUiaPropertyChangedEventArgs@@@@@@QEAAJ_K@Z @ 0x1803CCDCC (-RemoveAt@-$CTSimpleArray@PEAUUiaPropertyChangedEventArgs@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUU.c)
 */

void __fastcall AppResizeAcc::ProcessPendingNotifications(IRawElementProviderSimple *pProvider, char a2)
{
  HRESULT (__stdcall *QueryInterface)(IRawElementProviderSimple *, const IID *const, void **); // rdi
  PROPERTYID v5; // edx
  IRecordInfo *v6; // xmm1_8
  __int128 v7; // xmm0
  struct IRawElementProviderSimpleVtbl *lpVtbl; // xmm1_8
  VARIANT newValue; // [rsp+20h] [rbp-48h] BYREF
  VARIANT oldValue; // [rsp+40h] [rbp-28h] BYREF

  while ( pProvider[16].lpVtbl )
  {
    QueryInterface = pProvider[15].lpVtbl->QueryInterface;
    if ( a2 )
    {
      v5 = *((_DWORD *)QueryInterface + 2);
      v6 = (IRecordInfo *)*((_QWORD *)QueryInterface + 7);
      *(_OWORD *)&newValue.vt = *(_OWORD *)((char *)QueryInterface + 40);
      v7 = *(_OWORD *)&pProvider[6].lpVtbl;
      newValue.pRecInfo = v6;
      lpVtbl = pProvider[8].lpVtbl;
      *(_OWORD *)&oldValue.vt = v7;
      oldValue.pRecInfo = (IRecordInfo *)lpVtbl;
      UiaRaiseAutomationPropertyChangedEvent(pProvider, v5, &oldValue, &newValue);
    }
    VariantClear((VARIANTARG *)((char *)QueryInterface + 40));
    operator delete(QueryInterface);
    CTSimpleArray<UiaPropertyChangedEventArgs *,4294967294,CTPolicyCoTaskMem<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardCompareHelper<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardMergeHelper<UiaPropertyChangedEventArgs *>>::RemoveAt(
      &pProvider[15],
      0LL);
  }
}
