/*
 * XREFs of _initialize_onexit_table @ 0x18008A7FA
 * Callers:
 *     __scrt_initialize_onexit_tables @ 0x180089E48 (__scrt_initialize_onexit_tables.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl initialize_onexit_table(_onexit_table_t *Table)
{
  return _o__initialize_onexit_table(Table);
}
