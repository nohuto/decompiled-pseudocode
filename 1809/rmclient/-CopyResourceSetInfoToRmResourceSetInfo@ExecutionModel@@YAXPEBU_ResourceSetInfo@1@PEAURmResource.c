/*
 * XREFs of ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x180012120
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180010AD0 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 * Callees:
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

void __fastcall ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(
        ExecutionModel *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct RmResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x5D8uLL);
  *((_QWORD *)a2 + 185) = *((_QWORD *)this + 45);
  *((_QWORD *)a2 + 157) = *((_QWORD *)this + 7);
  *((_QWORD *)a2 + 158) = *((_QWORD *)this + 8);
  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 305) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 304) = *((_DWORD *)this + 3);
  *(_OWORD *)((char *)a2 + 1224) = *(_OWORD *)((char *)this + 24);
  *((_WORD *)a2 + 620) = *((_WORD *)this + 20);
  *((_BYTE *)a2 + 1242) = *((_BYTE *)this + 42);
  *((_DWORD *)a2 + 311) = *((_DWORD *)this + 11);
  *((_DWORD *)a2 + 312) = *((_DWORD *)this + 12);
  *((_DWORD *)a2 + 318) = *((_DWORD *)this + 18);
  *((_DWORD *)a2 + 372) = *((_DWORD *)this + 92);
  *((_DWORD *)a2 + 302) = *(_DWORD *)this;
  *((_DWORD *)a2 + 369) = *((_DWORD *)this + 88);
  *((_DWORD *)a2 + 373) = *((_DWORD *)this + 93);
  memcpy_s((char *)a2 + 1276, 0xC8uLL, (char *)this + 152, 0xC8uLL);
  memcpy_s((char *)a2 + 8, 0x4B0uLL, (char *)this + 80, 0x48uLL);
}
