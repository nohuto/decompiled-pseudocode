/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18004B988
 * Callers:
 *     _dynamic_atexit_destructor_for__g_debugTreeDumpDir__ @ 0x1800F18E0 (_dynamic_atexit_destructor_for__g_debugTreeDumpDir__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  return std::wstring::_Tidy_deallocate(a1);
}
