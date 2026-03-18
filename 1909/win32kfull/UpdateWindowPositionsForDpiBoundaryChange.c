/*
 * XREFs of UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00CC090
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00CBF4C (UpdateMonitorForWindowAndChildren.c)
 * Callees:
 *     OffsetChildren @ 0x1C002C01C (OffsetChildren.c)
 *     OffsetWindow @ 0x1C002C110 (OffsetWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F520 (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00CC148 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00CC188 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  struct tagWND *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v3 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v4 = (struct tagWND *)HMValidateHandleNoSecure(v3[1], a2, a3);
      v5 = (__int64)v4;
      if ( v4 && (*((_DWORD *)v3 + 6) || (unsigned int)IsChildWindowDpiBoundary(v4)) )
      {
        v6 = *(_QWORD *)(v5 + 104);
        v10 = *(_OWORD *)(*(_QWORD *)(v6 + 40) + 104LL);
        LogicalToPhysicalInPlaceRectWithSubpixel(v6, &v10, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v5, &v10, 0LL);
        v7 = *(_QWORD *)(v5 + 40);
        v8 = DWORD1(v10) + *((_DWORD *)v3 + 5) - *(_DWORD *)(v7 + 92);
        v9 = v10 + *((_DWORD *)v3 + 4) - *(_DWORD *)(v7 + 88);
        if ( v9 || v8 )
        {
          OffsetWindow(v5, v9, v8, 1);
          OffsetChildren((struct tagWND *)v5, v9, v8, 0LL, 1u);
        }
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 );
  }
}
