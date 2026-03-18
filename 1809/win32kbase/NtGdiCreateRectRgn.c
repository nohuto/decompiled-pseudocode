/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C006AF70
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001D7B4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001EEA0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C001F078 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0025400 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C006B0A4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     HmgAllocateObjectAttr @ 0x1C006B0CC (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C007FCDC (HmgFreeObjectAttr.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00F5DF8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 ObjectAttr; // rsi
  REGION *v7; // rdi
  struct HOBJ__ *inserted; // rbx
  REGION *v9; // rax
  struct _RECTL v11; // [rsp+20h] [rbp-50h] BYREF
  REGION *v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+38h] [rbp-38h]
  _BYTE v14[32]; // [rsp+40h] [rbp-30h] BYREF
  REGION *v15; // [rsp+60h] [rbp-10h]

  v11.left = a1;
  v11.top = a2;
  v11.right = a3;
  v4 = (a1 & 0xF8000000) + 0x8000000;
  v11.bottom = a4;
  if ( (v4 & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (v5 = (a2 & 0xF8000000) + 0x8000000, (v5 & 0xF7FFFFFF) != 0) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    ObjectAttr = HmgAllocateObjectAttr(v4, v5);
    if ( ObjectAttr )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12, 0LL, 1);
      v7 = v12;
      if ( v12 )
      {
        ERECTL::vOrder((ERECTL *)&v11);
        RGNOBJ::vSet((RGNOBJ *)&v12, &v11);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
        inserted = 0LL;
        if ( !v15 )
        {
          inserted = HmgInsertObjectInternal(v7, 1u, 4);
          v9 = v15;
          if ( inserted )
            v9 = v7;
          v15 = v9;
        }
        if ( inserted )
        {
          *((_QWORD *)GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v7) + 2) = ObjectAttr;
        }
        else
        {
          REGION::vDeleteREGION(v7);
          v7 = 0LL;
          HmgFreeObjectAttr(ObjectAttr);
        }
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
      }
      else
      {
        inserted = 0LL;
        EngSetLastError(8u);
      }
      if ( v13 == 1 )
        REGION::vDeleteREGION(v7);
    }
    else
    {
      inserted = 0LL;
      EngSetLastError(8u);
    }
  }
  return inserted;
}
