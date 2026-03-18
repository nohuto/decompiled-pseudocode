/*
 * XREFs of ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C003067C
 * Callers:
 *     GreSfmGetDirtyRgn @ 0x1C0030500 (GreSfmGetDirtyRgn.c)
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0030940 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C008C9F0 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall GrepSfmGetDirtyRgn(
        struct SFMLOGICALSURFACE *a1,
        int *a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  char *v9; // rbx
  int *v10; // r15
  unsigned int v15; // esi
  int *v16; // rcx
  __int64 v17; // rax
  int *v18; // rax
  __int64 v19; // r8
  int *v20; // rdx
  int v21; // ecx
  int v22; // eax
  bool v23; // zf
  struct RGNOBJ *v24; // rdx
  HRGN v25; // rax
  HRGN v27; // rax
  __int64 v28; // rax
  int *v29; // rcx
  HRGN *v30; // rsi
  HRGN v31; // rax
  struct _POINTL *v32; // rcx
  int *v33; // [rsp+20h] [rbp-20h] BYREF
  int v34; // [rsp+28h] [rbp-18h]
  _QWORD v35[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v36; // [rsp+70h] [rbp+30h] BYREF

  v9 = (char *)a1 + 256;
  v10 = 0LL;
  v15 = -1073741811;
  if ( a1 != (struct SFMLOGICALSURFACE *)-256LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
  }
  v16 = a9;
  *a9 = 0;
  if ( *((_QWORD *)a1 + 23) )
  {
    *v16 = *((_DWORD *)a1 + 42);
    if ( *((_DWORD *)a1 + 42) == 1
      && ((v28 = *((_QWORD *)a1 + 23)) == 0 ? (v29 = 0LL) : (v29 = *(int **)(v28 + 8)), v29 == a2) )
    {
      v10 = (int *)a6;
      if ( a6 )
      {
        v30 = a5;
        v36 = *((_QWORD *)a1 + 20);
        if ( a5 && *((_QWORD *)a1 + 18) )
        {
          a9 = (int *)*((_QWORD *)a1 + 18);
          *v30 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
        }
        EtwTranslationUpdateOffsetDWM(*(_QWORD *)a1, *((unsigned int *)a1 + 38), HIDWORD(*((_QWORD *)a1 + 19)));
        EtwTraceMoveRegion(*(_QWORD *)a1, 0LL, 6LL, *((_QWORD *)a1 + 20));
        v31 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v36);
        v32 = a7;
        *(_QWORD *)v10 = v31;
        v10 = 0LL;
        if ( v32 )
          *v32 = *(struct _POINTL *)((char *)a1 + 152);
        METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a1 + 128), 0);
      }
    }
    else if ( a6 )
    {
      *a6 = 0LL;
    }
    if ( a8 )
      *a8 = (*((_DWORD *)a1 + 63) >> 4) & 1;
    if ( a3 )
    {
      v17 = *((_QWORD *)a1 + 23);
      v18 = v17 ? *(int **)(v17 + 8) : v10;
      if ( v18 == a2 )
      {
        a9 = (int *)*((_QWORD *)a1 + 16);
        if ( a9 )
        {
          EtwTraceDWMGetDirtyRegion(*(_QWORD *)a1, 0LL);
          v27 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
          *a3 = v27;
          if ( v27 )
          {
            *((_QWORD *)a1 + 16) = v10;
            *((_DWORD *)a1 + 63) &= ~2u;
          }
        }
      }
    }
    if ( a4 && ((*((_DWORD *)a1 + 63) & 4) != 0 || !a2) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v33);
      v19 = *((_QWORD *)a1 + 11);
      v20 = (int *)*((_QWORD *)a1 + 10);
      v36 = v19;
      a9 = v20;
      if ( v33 != v10 )
      {
        v21 = (int)v10;
        v22 = (int)v10;
        LOBYTE(v21) = v20 != 0LL;
        LOBYTE(v22) = v19 != 0;
        if ( v22 == v21 )
        {
          if ( v19 && v20 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v35);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v35);
            if ( (*((_DWORD *)a1 + 63) & 4) != 0 )
            {
              if ( (int *)v35[0] != v10
                && RGNOBJ::bMerge((RGNOBJ *)v35, (struct RGNOBJ *)&v36, (struct RGNOBJ *)&a9, BYTE1(gafjRgnOp)) )
              {
                RGNOBJ::vSwap((RGNOBJ *)v35, (struct RGNOBJ *)&v33);
              }
            }
            else
            {
              RGNOBJ::bCopy((RGNOBJ *)&v33, (struct RGNOBJ *)&v36);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v35);
          }
        }
        else
        {
          v23 = v20 == 0LL;
          v24 = (struct RGNOBJ *)&a9;
          if ( v23 )
            v24 = (struct RGNOBJ *)&v36;
          RGNOBJ::bCopy((RGNOBJ *)&v33, v24);
        }
        if ( a9 != v10 && (*((_DWORD *)a1 + 63) & 0x10) != 0 )
          RGNOBJ::vSet((RGNOBJ *)&a9);
        if ( v33 != v10 )
        {
          v25 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v33);
          *a4 = v25;
          if ( !v25 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
        }
      }
      if ( v34 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
    }
    v15 = (unsigned int)v10;
  }
  if ( v9 )
  {
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  return v15;
}
