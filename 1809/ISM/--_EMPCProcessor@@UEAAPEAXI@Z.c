/*
 * XREFs of ??_EMPCProcessor@@UEAAPEAXI@Z @ 0x1800F72F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800F7344 (--1-$_Tree@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUI.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1801007B8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCProcessor *__fastcall MPCProcessor::`vector deleting destructor'(MPCProcessor *this, char a2)
{
  std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>((char *)this + 3760);
  *((_DWORD *)this + 939) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xEC8);
  return this;
}
