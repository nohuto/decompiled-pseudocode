/*
 * XREFs of NtUserRedrawWindow @ 0x1C003AE70
 * Callers:
 *     <none>
 * Callees:
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C003BFEC (IntersectWithParents.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     xxxDoSyncPaint @ 0x1C006E41C (xxxDoSyncPaint.c)
 *     CalcWindowRgn @ 0x1C006F268 (CalcWindowRgn.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     MirrorRegion @ 0x1C00C7908 (MirrorRegion.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     SpbCheckRect @ 0x1C01F3180 (SpbCheckRect.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  __int128 *v6; // r14
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // esi
  char v16; // al
  __int64 v17; // rcx
  int v18; // edx
  int v19; // ecx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v21; // r14
  __int64 *ThreadWin32Thread; // rax
  unsigned int v23; // esi
  __int64 v24; // r14
  __int64 StyleWindow; // r12
  __int64 RectRgnIndirect; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  struct tagRECT *v29; // rax
  HRGN v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v35; // [rsp+40h] [rbp-E8h]
  __int64 v36; // [rsp+48h] [rbp-E0h]
  struct tagRECT v37; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v38[3]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v39[3]; // [rsp+88h] [rbp-A0h] BYREF
  struct tagRECT v40; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v43; // [rsp+D0h] [rbp-58h] BYREF

  v6 = a2;
  EnterCrit(0LL, 1LL);
  v9 = 0;
  if ( a1 )
  {
    v11 = ValidateHwnd(a1);
    if ( !v11 )
      goto LABEL_75;
  }
  else
  {
    v11 = 0LL;
  }
  v38[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v38;
  v38[1] = v11;
  if ( v11 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
    v6 = a2;
  }
  if ( v6 )
  {
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v6 = (__int128 *)MmUserProbeAddress;
    v41 = *v6;
    v6 = &v41;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
  {
    UserSetLastError(1004LL);
  }
  else
  {
    v15 = a4 | 0x10000;
    if ( v11 )
      v15 = a4;
    else
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
    v14 = v11;
    if ( v11 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v14 + 40);
        v16 = *(_BYTE *)(v8 + 31);
        if ( (v16 & 0x10) == 0 || (v16 & 0x20) != 0 && v14 != v11 )
          break;
        if ( (*(_WORD *)(v8 + 42) & 0x2FFF) != 0x29D )
        {
          v14 = *(_QWORD *)(v14 + 80);
          if ( v14 )
            continue;
        }
        goto LABEL_22;
      }
    }
    else
    {
LABEL_22:
      if ( (v15 & 9) != 0 )
      {
        if ( a3 )
        {
          if ( a3 != 1 )
          {
            GreCombineRgn(ghrgnInv0, a3, 0LL, 5LL);
            MirrorRegion(v11, ghrgnInv0, 1LL);
            a3 = ghrgnInv0;
          }
          if ( v11 != GetDesktopWindow(v11) )
            GreOffsetRgn(
              a3,
              *(unsigned int *)(*(_QWORD *)(v11 + 40) + 104LL),
              *(unsigned int *)(*(_QWORD *)(v11 + 40) + 108LL));
        }
        else if ( v6 )
        {
          a3 = ghrgnInv0;
          v17 = *(_QWORD *)(v11 + 40);
          if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
          {
            v18 = *(_DWORD *)(v17 + 112) - *(_DWORD *)(v17 + 104);
            v19 = *(_DWORD *)v6;
            *(_DWORD *)v6 = v18 - *((_DWORD *)v6 + 2);
            *((_DWORD *)v6 + 2) = v18 - v19;
          }
          if ( v11 == GetDesktopWindow(v11) )
            SetRectRgnIndirect(ghrgnInv0, v6);
          else
            GreSetRectRgn(
              ghrgnInv0,
              (unsigned int)(*(_DWORD *)v6 + *(_DWORD *)(*(_QWORD *)(v11 + 40) + 104LL)),
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(v11 + 40) + 108LL) + *((_DWORD *)v6 + 1)),
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(v11 + 40) + 104LL) + *((_DWORD *)v6 + 2)),
              *(_DWORD *)(*(_QWORD *)(v11 + 40) + 108LL) + *((_DWORD *)v6 + 3));
        }
        else
        {
          a3 = 1LL;
        }
      }
      CurrentThread = KeGetCurrentThread();
      v21 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v8) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v21 = *ThreadWin32Thread;
      }
      v39[0] = *(_QWORD *)(v21 + 416);
      *(_QWORD *)(v21 + 416) = v39;
      v39[1] = v11;
      if ( v11 )
        _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
      v23 = v15 | 0x1000;
      v35 = 0LL;
      v36 = 0LL;
      v24 = 0LL;
      if ( (v23 & 1) != 0 )
      {
        StyleWindow = GetStyleWindow(v11, 2818);
        v35 = StyleWindow;
        if ( StyleWindow )
        {
          if ( a3 == 1 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v11 + 40) + 88LL);
            v24 = RectRgnIndirect;
            if ( RectRgnIndirect )
              a3 = RectRgnIndirect;
          }
          else
          {
            v24 = 0LL;
          }
          v36 = v11;
          v11 = StyleWindow;
          v23 |= 0x80u;
        }
      }
      v27 = *(_QWORD *)(v11 + 40);
      v28 = v27;
      if ( (*(_BYTE *)(v27 + 26) & 8) != 0 && (v23 & 1) != 0 )
      {
        *(_DWORD *)(v27 + 232) |= 2u;
        v28 = *(_QWORD *)(v11 + 40);
      }
      if ( (v23 & 0x400) != 0 )
      {
        v42 = *(_OWORD *)(v28 + 88);
        v29 = (struct tagRECT *)&v42;
      }
      else
      {
        v43 = *(_OWORD *)(v28 + 104);
        v29 = (struct tagRECT *)&v43;
      }
      v37 = *v29;
      if ( (v23 & 9) != 0 )
      {
        v30 = (HRGN)a3;
        if ( a3 == 1 )
        {
          v30 = (HRGN)ghrgnInv1;
          CalcWindowRgn(v11, ghrgnInv1, (v23 & 0x400) == 0);
        }
      }
      else
      {
        v30 = (HRGN)ghrgnInv1;
        SetEmptyRgn(ghrgnInv1);
      }
      if ( (v23 & 9) == 0 || (v23 & 1) == 0 || (unsigned int)IntersectWithParents(v11, &v37) )
      {
        if ( (v23 & 0x1001) == 0x1001 )
        {
          if ( *(_QWORD *)(gpDispInfo + 32LL) )
          {
            *(_QWORD *)&v40.left = 0LL;
            *(_QWORD *)&v40.right = 0LL;
            if ( (unsigned int)GreGetRgnBox(v30, &v40) )
            {
              IntersectRect(&v40, &v40, &v37);
              SpbCheckRect((struct tagWND *)v11, &v40, 0);
            }
          }
        }
        InternalInvalidate2((struct tagWND *)v11, (HRGN)a3, v30, &v37, v23);
        if ( v35 )
        {
          v11 = v36;
          if ( v24 )
            GreDeleteObject(v24);
        }
        if ( (v23 & 0x100) != 0 )
        {
          xxxInternalUpdateWindow((struct tagWND *)v11, ((v23 >> 6) & 1) == 0);
        }
        else if ( (v23 & 0x200) != 0 )
        {
          if ( (v23 & 0x40) == 0 )
            v9 = (v23 & 0x80u) != 0 ? 32 : 4;
          xxxDoSyncPaint(v11, (unsigned int)v9);
        }
      }
      ThreadUnlock1(v32, v31);
    }
    v9 = 1;
  }
  ThreadUnlock1(v14, v8);
LABEL_75:
  UserSessionSwitchLeaveCrit(v10, v8, v12, v13);
  return v9;
}
