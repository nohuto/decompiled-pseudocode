/*
 * XREFs of NtGdiGetDCObject @ 0x1C00DA180
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C0133238 (CreateCompatiblePublicDC.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rdx
  DC *v6; // rcx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rbx
  __int64 *v11; // rax
  DC *v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+28h] [rbp-58h]
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  int v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+B0h] [rbp+30h] BYREF

  v3 = 0LL;
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || a1 != -589410304 )
  {
    v13 = 0LL;
    LOBYTE(v5) = 1;
    v12 = (DC *)HmgLockEx(a1, v5);
    if ( v12 )
    {
      if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v12) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
        return v3;
      }
      v6 = v12;
      if ( (*((_DWORD *)v12 + 132) & 4) == 0 )
      {
LABEL_5:
        if ( v6 )
        {
          v7 = *((_QWORD *)v6 + 10);
          v8 = *(_DWORD *)(v7 + 8);
          if ( (v8 & 0x1000) != 0 )
          {
            GreDCSelectBrush(v6, *(_QWORD *)(v7 + 16));
            v6 = v12;
          }
          if ( (v8 & 0x2000) != 0 )
          {
            GreDCSelectPen(v6, *(_QWORD *)(*((_QWORD *)v6 + 10) + 24LL));
            v6 = v12;
          }
          if ( a2 == 655360 )
          {
            v3 = *(_QWORD *)(*((_QWORD *)v6 + 10) + 176LL);
          }
          else if ( a2 == 0x80000 )
          {
            v3 = *((_QWORD *)v6 + 11);
          }
          else if ( a2 == 327680 )
          {
            v18 = 0LL;
            v14 = 0LL;
            v15 = 0LL;
            v16 = 0;
            v17 = 0LL;
            v21 = 0LL;
            v20 = 0LL;
            v19 = 0LL;
            DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v14, (struct XDCOBJ *)&v12);
            v3 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)&v12) + 4);
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v14);
          }
          else
          {
            if ( a2 == 0x100000 )
            {
              v11 = (__int64 *)*((_QWORD *)v6 + 18);
            }
            else
            {
              if ( a2 != 3145728 && a2 != 5242880 )
                goto LABEL_12;
              v11 = (__int64 *)*((_QWORD *)v6 + 19);
            }
            v3 = *v11;
          }
LABEL_12:
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v12);
          v22 = 0;
          v9 = *(_QWORD *)v12;
          HmgDecrementExclusiveReferenceCountEx(v12, HIDWORD(v13), &v22);
          if ( v22 )
            bDeleteDCInternalEx(v9, 0LL);
        }
        return v3;
      }
      DC::vMarkTransformDirty(v12);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v6 = v12;
    goto LABEL_5;
  }
  if ( a2 == 655360 )
    return GreGetStockObject(13LL);
  else
    return 0LL;
}
