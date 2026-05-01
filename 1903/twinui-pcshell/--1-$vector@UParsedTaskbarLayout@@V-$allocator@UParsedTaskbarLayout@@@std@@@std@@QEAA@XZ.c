/*
 * XREFs of ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x1801686B4
 * Callers:
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$2 @ 0x1801699A4 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$2.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$7 @ 0x1801E820D (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>()
{
  return std::vector<ParsedPenWorkspaceLayout>::_Tidy();
}
