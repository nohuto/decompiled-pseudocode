/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@IKU?$less@I@std@@V?$allocator@U?$pair@$$CBIK@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18009642C
 * Callers:
 *     ??1?$map@IKU?$less@I@std@@V?$allocator@U?$pair@$$CBIK@std@@@2@@std@@QEAA@XZ @ 0x1800957A0 (--1-$map@IKU-$less@I@std@@V-$allocator@U-$pair@$$CBIK@std@@@2@@std@@QEAA@XZ.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800957F8 (--1SpectrumListener@@UEAA@XZ.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800961D8 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@Z @ 0x1800963D0 (-_Erase@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$p.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned long,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned long>>,0>>::clear(
        _QWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Erase(
    (__int64)a1,
    *(void **)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = v2;
  *(_QWORD *)*a1 = v2;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v2;
  a1[1] = 0LL;
  return result;
}
