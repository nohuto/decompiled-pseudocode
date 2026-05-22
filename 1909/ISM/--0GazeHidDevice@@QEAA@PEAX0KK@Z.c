/*
 * XREFs of ??0GazeHidDevice@@QEAA@PEAX0KK@Z @ 0x1800A4754
 * Callers:
 *     ?CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800A4940 (-CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IKU?$less@I@std@@V?$allocator@U?$pair@$$CBIK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIK@std@@PEAX@2@XZ @ 0x18009614C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IKU-$less@I@std@@V-$allocator@U-$pair@$$CBIK@st.c)
 */

// Hidden C++ exception states: #wind=1
GazeHidDevice *__fastcall GazeHidDevice::GazeHidDevice(
        GazeHidDevice *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  _OWORD v7[4]; // [rsp+30h] [rbp-48h] BYREF

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 10) = a5;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  memset_0((char *)this + 60, 0, 0x40uLL);
  *(_QWORD *)this = &GazeHidDevice::`vftable';
  memset_0(v7, 0, sizeof(v7));
  *((_OWORD *)this + 8) = v7[0];
  *((_OWORD *)this + 9) = v7[1];
  *((_OWORD *)this + 10) = v7[2];
  *((_OWORD *)this + 11) = v7[3];
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 25) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,unsigned long,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned long>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 28) = 0LL;
  return this;
}
