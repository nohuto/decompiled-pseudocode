/*
 * XREFs of ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C011F678
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C005B840 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     <none>
 */

void __fastcall CAsyncKeyEventMonitor::OnKeyStateRequested(CAsyncKeyEventMonitor *this, int a2)
{
  PREGHANDLE v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rax

  v2 = gpAsyncKeyEventMonitor;
  ExAcquirePushLockExclusiveEx(gpAsyncKeyEventMonitor + 12, 0LL);
  v4 = *((unsigned int *)v2 + 1);
  *((_BYTE *)v2 + 88) = 1;
  if ( LODWORD(v2[v4 + 1]) == a2 )
  {
    ++HIDWORD(v2[v4 + 1]);
  }
  else
  {
    v5 = 0LL;
    if ( !*(_DWORD *)v2 )
      *(_DWORD *)v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v6 = v2 + 1;
    while ( *v6 != a2 )
    {
      if ( *v6 == -1 )
      {
        LODWORD(v2[v5 + 1]) = a2;
        HIDWORD(v2[v5 + 1]) = 1;
        goto LABEL_12;
      }
      v5 = (unsigned int)(v5 + 1);
      v6 += 2;
      if ( (unsigned int)v5 >= 0xA )
        goto LABEL_13;
    }
    ++HIDWORD(v2[v5 + 1]);
LABEL_12:
    *((_DWORD *)v2 + 1) = v5;
  }
LABEL_13:
  ExReleasePushLockExclusiveEx(v2 + 12, 0LL);
}
