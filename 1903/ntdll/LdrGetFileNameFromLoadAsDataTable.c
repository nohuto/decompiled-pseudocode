/*
 * XREFs of LdrGetFileNameFromLoadAsDataTable @ 0x1800E0060
 * Callers:
 *     <none>
 * Callees:
 *     sub_180054C74 @ 0x180054C74 (sub_180054C74.c)
 */

NTSTATUS __cdecl LdrGetFileNameFromLoadAsDataTable(PVOID Module, PVOID *pFileNamePrt)
{
  NTSTATUS result; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF

  if ( !Module || !pFileNamePrt )
    return -1073741811;
  result = sub_180054C74((__int64)Module, &v4);
  if ( result >= 0 )
  {
    if ( *((_QWORD *)&v4 + 1) )
      *pFileNamePrt = (PVOID)*((_QWORD *)&v4 + 1);
    else
      return -1073741823;
  }
  return result;
}
