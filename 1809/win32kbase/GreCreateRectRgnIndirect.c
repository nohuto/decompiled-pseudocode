/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C001EC80
 * Callers:
 *     CreateEmptyRgnPublic @ 0x1C0019D40 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C001C5B0 (CreateEmptyRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F480 (SetOrCreateRectRgnIndirectPublic.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C00281A0 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     UserValidateCopyRgn @ 0x1C003A790 (UserValidateCopyRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001D7B4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001EEA0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C001F078 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00F5DF8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  unsigned int v3; // ebp
  struct HOBJ__ *inserted; // rdi
  int v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rbx
  LONG left; // eax
  LONG right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+28h] [rbp-40h]
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (a1->top & 0xF8000000) != 0 && (a1->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v3 = 216;
  inserted = 0LL;
  v13 = 0;
  if ( gulGdiHmgrTraceObjectType == 4 )
  {
    v3 = 376;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( dword_1C01CCDA0 < v3 )
  {
    v7 = PALLOCMEM2(v3);
    if ( v7 )
    {
      *(_QWORD *)v7 = 0LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      if ( v5 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v7 + v3 - 160LL), 0LL);
      goto LABEL_14;
    }
  }
  else
  {
    v6 = qword_1C01CCE30;
    if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0 )
    {
      v7 = Win32AllocateFromPagedLookasideListImpl(v6);
      if ( v7 )
      {
        *(_QWORD *)v7 = 0LL;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = 0LL;
        if ( v5 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v3 + v7 - 160), 0LL);
        *(_WORD *)(v7 + 14) = 0x8000;
LABEL_14:
        *(_QWORD *)(v7 + 24) = 216LL;
        *(_DWORD *)(v7 + 80) = 0;
        *(_QWORD *)(v7 + 32) = 0LL;
        *(_QWORD *)(v7 + 56) = v7 + 48;
        *(_QWORD *)(v7 + 48) = v7 + 48;
        left = a1->left;
        right = a1->right;
        v12 = v7;
        if ( left > right )
        {
          a1->left = right;
          a1->right = left;
        }
        top = a1->top;
        bottom = a1->bottom;
        if ( top > bottom )
        {
          a1->top = bottom;
          a1->bottom = top;
        }
        RGNOBJ::vSet((RGNOBJ *)&v12, a1);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
        if ( !v15 )
        {
          inserted = HmgInsertObjectInternal((struct _BASEOBJECT *)v7, 1u, 4u);
          if ( inserted )
            v15 = v7;
        }
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
        if ( !inserted )
          REGION::vDeleteREGION((REGION *)v7);
        return inserted;
      }
    }
  }
  EngSetLastError(8u);
  EngSetLastError(8u);
  return inserted;
}
