/*
 * XREFs of ?CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x180067E40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKW4InputType@@@std@@PEAX@2@XZ @ 0x180049CB8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KW4InputType@@U-$less@K@std@@V-$allocator@U-$pa.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeDeviceCollection::CreateDevice(
        GazeDeviceCollection *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  _QWORD *v10; // [rsp+28h] [rbp-60h]
  _OWORD v11[4]; // [rsp+40h] [rbp-48h] BYREF

  v10 = operator new(0xF0uLL);
  v10[1] = a2;
  v10[2] = a3;
  *((_DWORD *)v10 + 6) = a4;
  *((_DWORD *)v10 + 10) = a5;
  v10[4] = 0LL;
  v10[6] = 0LL;
  *((_DWORD *)v10 + 14) = 0;
  memset_0((char *)v10 + 60, 0, 0x40uLL);
  *v10 = &GazeHidDevice::`vftable';
  memset_0(v11, 0, sizeof(v11));
  *((_OWORD *)v10 + 8) = v11[0];
  *((_OWORD *)v10 + 9) = v11[1];
  *((_OWORD *)v10 + 10) = v11[2];
  *((_OWORD *)v10 + 11) = v11[3];
  v10[24] = 0LL;
  v10[25] = 0LL;
  v10[26] = 0LL;
  v10[25] = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::_Buyheadnode();
  v10[28] = 0LL;
  *a6 = (struct RIMDevice *)v10;
  return 0LL;
}
