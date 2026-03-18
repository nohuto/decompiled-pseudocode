/*
 * XREFs of UpdateWindowPositionsForDpiBoundaryChange @ 0x1C01052F0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C01051A8 (UpdateMonitorForWindowAndChildren.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C0041428 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     OffsetChildren @ 0x1C006F050 (OffsetChildren.c)
 *     OffsetWindow @ 0x1C006F138 (OffsetWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C007A5D8 (IsChildWindowDpiBoundary.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  struct tagWND *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  int v9[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v3 = (struct tagWND *)HMValidateHandleNoSecure(v2[1], a2);
      v4 = (__int64)v3;
      if ( v3 && (*((_DWORD *)v2 + 6) || (unsigned int)IsChildWindowDpiBoundary(v3)) )
      {
        v5 = *(_QWORD *)(v4 + 80);
        *(_OWORD *)v9 = *(_OWORD *)(*(_QWORD *)(v5 + 40) + 104LL);
        LogicalToPhysicalInPlaceRectWithSubpixel((struct tagWND *)v5, v9, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel((struct tagWND *)v4, v9, 0LL);
        v6 = *(_QWORD *)(v4 + 40);
        v7 = v9[1] + *((_DWORD *)v2 + 5) - *(_DWORD *)(v6 + 92);
        v8 = v9[0] + *((_DWORD *)v2 + 4) - *(_DWORD *)(v6 + 88);
        if ( v8 || v7 )
        {
          OffsetWindow(v4, v8, v7, 1);
          OffsetChildren((struct tagWND *)v4, v8, v7, 0LL, 1u);
        }
      }
      v2 = (__int64 *)*v2;
    }
    while ( v2 );
  }
}
