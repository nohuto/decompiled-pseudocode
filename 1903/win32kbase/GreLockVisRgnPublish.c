/*
 * XREFs of GreLockVisRgnPublish @ 0x1C0082000
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqz @ 0x1C0132558 (McTemplateK0pqz.c)
 */

PVOID __fastcall GreLockVisRgnPublish(int a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  PVOID result; // rax

  v3 = (struct _ERESOURCE *)ghsemVisRgnPublish;
  if ( ghsemVisRgnPublish )
  {
    PsEnterPriorityRegion();
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw )
  {
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return (PVOID)McTemplateK0pqz(a1, a2, a3, (_DWORD)ghsemVisRgnPublish, 9, (__int64)L"ghsemVisRgnPublish");
  }
  return result;
}
