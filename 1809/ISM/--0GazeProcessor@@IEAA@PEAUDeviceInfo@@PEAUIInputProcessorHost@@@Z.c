/*
 * XREFs of ??0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800EB870
 * Callers:
 *     ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EBB80 (-Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 */

// Hidden C++ exception states: #wind=4
GazeProcessor *__fastcall GazeProcessor::GazeProcessor(
        GazeProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 6) = a3;
  *(_QWORD *)this = &GazeProcessor::`vftable'{for `IInputProcessorDeviceUpdate'};
  *((_QWORD *)this + 1) = &GazeProcessor::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &GazeProcessor::`vftable'{for `ISupportedInputUpdateObserver'};
  *((_QWORD *)this + 3) = &GazeProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &GazeProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 25) = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
                             (__int64)this,
                             0LL,
                             0LL);
  return this;
}
