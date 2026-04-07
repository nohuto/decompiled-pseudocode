/*
 * XREFs of ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x180037FA0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::UpdateDCompVisuals(CTopLevelWindow *this)
{
  __int64 v1; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 90);
  if ( v1 && *(_DWORD *)(v1 + 512) )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 488) + 8 * v3);
      if ( *(_BYTE *)(v4 + 42) )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 104) + 64LL))(*(_QWORD *)(v4 + 104));
        v1 = *((_QWORD *)this + 90);
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v1 + 512) );
  }
}
