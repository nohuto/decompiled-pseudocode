/*
 * XREFs of VerifierEngFreeMem @ 0x1C026E2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VerifierEngFreeMem(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( a1 )
  {
    v1 = a1;
    if ( (gvs & 8) != 0 )
    {
      v1 = a1 - 4;
      GreAcquireSemaphore(qword_1C031D840);
      v2 = *v1;
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
        __fastfail(3u);
      *v3 = v2;
      *(_QWORD *)(v2 + 8) = v3;
      EtwTraceGreLockReleaseSemaphore(L"gvs.hsemPoolTracker", qword_1C031D840);
      GreReleaseSemaphoreInternal(qword_1C031D840);
    }
    MultiUserGreTrackRemoveEngResource(v1 - 4);
    Win32FreePool(v1 - 4);
  }
}
