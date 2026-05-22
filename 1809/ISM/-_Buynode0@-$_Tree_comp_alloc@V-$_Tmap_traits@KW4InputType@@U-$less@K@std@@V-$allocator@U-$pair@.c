/*
 * XREFs of ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKW4InputType@@@std@@PEAX@2@XZ @ 0x18004A128
 * Callers:
 *     ??$_Buynode@AEAKAEAW4InputType@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKW4InputType@@@std@@PEAX@1@AEAKAEAW4InputType@@@Z @ 0x180049F04 (--$_Buynode@AEAKAEAW4InputType@@@-$_Tree_comp_alloc@V-$_Tmap_traits@KW4InputType@@U-$less@K@std@.c)
 *     ??$_Buynode@W4GazeProperty@@G@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1800C1320 (--$_Buynode@W4GazeProperty@@G@-$_Tree_comp_alloc@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4Gaze.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::_Buynode0(
        _QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x28uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
