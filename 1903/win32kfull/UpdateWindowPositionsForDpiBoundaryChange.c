/*
 * XREFs of UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00ED4B0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00ED36C (UpdateMonitorForWindowAndChildren.c)
 * Callees:
 *     OffsetChildren @ 0x1C0025BAC (OffsetChildren.c)
 *     OffsetWindow @ 0x1C0025CA0 (OffsetWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C00CDE50 (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00ED568 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00ED5A8 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  struct tagWND *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v4 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v5 = (struct tagWND *)HMValidateHandleNoSecure(v4[1], a2, a3, a4);
      v6 = (__int64)v5;
      if ( v5 && (*((_DWORD *)v4 + 6) || (unsigned int)IsChildWindowDpiBoundary(v5)) )
      {
        v7 = *(_QWORD *)(v6 + 104);
        v11 = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 104LL);
        LogicalToPhysicalInPlaceRectWithSubpixel(v7, &v11, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v6, &v11, 0LL);
        v8 = *(_QWORD *)(v6 + 40);
        v9 = DWORD1(v11) + *((_DWORD *)v4 + 5) - *(_DWORD *)(v8 + 92);
        v10 = v11 + *((_DWORD *)v4 + 4) - *(_DWORD *)(v8 + 88);
        if ( v10 || v9 )
        {
          OffsetWindow(v6, v10, v9, 1);
          OffsetChildren((struct tagWND *)v6, v10, v9, 0LL, 1u);
        }
      }
      v4 = (__int64 *)*v4;
    }
    while ( v4 );
  }
}
