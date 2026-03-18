/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800D94F8
 * Callers:
 *     _dynamic_atexit_destructor_for__g_debugTreeDumpDir__ @ 0x1800EDC20 (_dynamic_atexit_destructor_for__g_debugTreeDumpDir__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::wstring::~wstring(_QWORD *a1)
{
  return std::wstring::_Tidy_deallocate(a1);
}
