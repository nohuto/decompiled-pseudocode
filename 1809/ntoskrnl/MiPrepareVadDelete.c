/*
 * XREFs of MiPrepareVadDelete @ 0x1405E02B8
 * Callers:
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 * Callees:
 *     MiLockAddressSpaceToo @ 0x140025794 (MiLockAddressSpaceToo.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 */

__int64 __fastcall MiPrepareVadDelete(__int64 a1, char *a2, __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  int v9; // eax
  char v10; // dl
  struct _KTHREAD *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  struct _KTHREAD *CurrentThread; // rcx

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v8 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  *a5 = 0;
  if ( a3 != v7 || (v9 = 0, a4 != v8) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 7) != 0 && (*(_DWORD *)(a1 + 48) & 7) != 6 )
      return 3221225631LL;
    if ( a3 == v7 )
    {
      *a5 = 1;
      v9 = 1;
    }
    else
    {
      v9 = 2;
      if ( a4 != v8 )
        v9 = 3;
      *a5 = v9;
    }
  }
  v10 = *a2;
  if ( !v9 )
  {
    if ( v10 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
      *a2 = 0;
    }
    return 0LL;
  }
  if ( v10 )
    return 0LL;
  *a5 = 0;
  v12 = KeGetCurrentThread();
  *a2 = 1;
  MiLockAddressSpaceToo((__int64)v12->ApcState.Process, a1);
  v13 = MiVadDeleted(a1);
  v14 = -1073741267;
  if ( v13 == 1 )
    return (unsigned int)-1073741664;
  return v14;
}
