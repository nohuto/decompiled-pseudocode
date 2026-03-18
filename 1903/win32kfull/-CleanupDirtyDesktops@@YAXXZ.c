/*
 * XREFs of ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01EABF4
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 * Callees:
 *     <none>
 */

void CleanupDirtyDesktops(void)
{
  __int64 i; // rbx
  _DWORD **v1; // rdi
  _DWORD *v2; // rcx
  _DWORD *v3; // rdx
  __int64 v4; // rax

  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    v1 = (_DWORD **)(i + 16);
    while ( 1 )
    {
      v2 = *v1;
      if ( !*v1 )
        break;
      if ( (v2[12] & 0x10) != 0 )
      {
        v1 = (_DWORD **)(v2 + 8);
      }
      else
      {
        if ( grpdeskLogon == v2 )
        {
          UnlockObjectAssignment(&grpdeskLogon);
          v2 = *v1;
        }
        v3 = v2;
        v4 = *(_QWORD *)(*(_QWORD *)(i + 24) + 8LL);
        if ( v4 )
        {
          if ( *(_DWORD **)(v4 + 24) == v2 )
          {
            UnlockObjectAssignment(v4 + 24);
            v3 = *v1;
          }
        }
        LockObjectAssignment(v1, *((_QWORD *)v3 + 4));
      }
    }
  }
}
