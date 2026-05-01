/*
 * XREFs of ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180295258
 * Callers:
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x1802913A8 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x180295B10 (-v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18028D4D8 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1802936CC (-_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCounte.c)
 *     ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x180295044 (-_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z.c)
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1802951C4 (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::_RemoveValidView(ViewEventDispatcher *this, unsigned __int64 a2)
{
  _QWORD *v4; // r14
  __int64 v5; // rbx
  int PerApplicationData; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = (_QWORD *)((char *)this + 352);
  v5 = *((_QWORD *)this + 44);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  PerApplicationData = ViewEventDispatcher::_FindPerApplicationData((__int64)this, *(_QWORD *)(v5 + 8 * a2), &v8);
  if ( PerApplicationData >= 0 )
  {
    if ( !--*(_QWORD *)(v8 + 16) )
    {
      ViewEventDispatcher::_RemovePendingActivationsForAppId(this, (HSTRING *)(v8 + 8));
      ViewEventDispatcher::_RemovePerApplicationData((__int64)this, v8);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB1D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)PerApplicationData);
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
    v4,
    a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
