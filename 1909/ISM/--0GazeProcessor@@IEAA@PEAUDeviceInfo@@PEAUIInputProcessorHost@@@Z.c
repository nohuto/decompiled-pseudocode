/*
 * XREFs of ??0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180125208
 * Callers:
 *     ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801255E0 (-Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078D34 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

// Hidden C++ exception states: #wind=4
GazeProcessor *__fastcall GazeProcessor::GazeProcessor(
        GazeProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 12) = 1;
  *((_QWORD *)this + 3) = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &KeyboardProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 8) = a2;
  *((_QWORD *)this + 7) = a3;
  *(_QWORD *)this = &GazeProcessor::`vftable'{for `IInputProcessorDeviceUpdate'};
  *((_QWORD *)this + 1) = &GazeProcessor::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &GazeProcessor::`vftable'{for `ISupportedInputUpdateObserver'};
  *((_QWORD *)this + 3) = &GazeProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &GazeProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &GazeProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 28) = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(0LL, 0LL, 0LL);
  return this;
}
