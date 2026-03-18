/*
 * XREFs of ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00D9DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall bSaveRegion(struct DCOBJ *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  DC *v6; // r9
  struct _DC_ATTR *UserAttr; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct _DC_ATTR *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // kr00_8
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  DC *v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h]
  _BYTE v17[4]; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+40h] [rbp-20h]
  struct _RECTL v21; // [rsp+48h] [rbp-18h] BYREF

  v2 = 1;
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)a2 != 1 )
  {
    v5 = *(_QWORD *)(v4 + 112);
    LOBYTE(a2) = 1;
    v16 = 0LL;
    v15 = (DC *)HmgLockEx(v5, a2, 0LL);
    v6 = v15;
    if ( v15 )
    {
      if ( (*((_DWORD *)v15 + 11) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v15);
        if ( UserAttr && !DC::SaveAttributes(v15, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
          v6 = 0LL;
          v15 = 0LL;
          goto LABEL_31;
        }
        *((_DWORD *)v15 + 11) |= 2u;
        v6 = v15;
        LODWORD(v16) = 1;
      }
      if ( (*((_DWORD *)v6 + 130) & 4) == 0 )
      {
LABEL_7:
        if ( v6 )
        {
          v8 = *((_QWORD *)v6 + 21);
          if ( v8 )
          {
            ++*(_DWORD *)(v8 + 32);
            v6 = v15;
          }
          v9 = *((_QWORD *)v6 + 20);
          if ( v9 )
          {
            ++*(_DWORD *)(v9 + 32);
            v6 = v15;
          }
          goto LABEL_12;
        }
LABEL_31:
        v2 = 0;
LABEL_12:
        if ( v6 )
        {
          if ( (_DWORD)v16 && (*((_DWORD *)v6 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v16) )
            {
              v10 = XDCOBJ::GetUserAttr((XDCOBJ *)&v15);
              if ( v10 )
                DC::RestoreAttributes(v15, v10);
              v6 = v15;
            }
            *((_DWORD *)v6 + 11) &= ~2u;
            v6 = v15;
            LODWORD(v16) = 0;
          }
          v18 = 0;
          v11 = *(_QWORD *)v6;
          HmgDecrementExclusiveReferenceCountEx(v6, HIDWORD(v16), &v18);
          if ( v18 )
            bDeleteDCInternalEx(v11, 0LL);
        }
        return v2;
      }
      DC::vMarkTransformDirty(v6);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v6 = v15;
    goto LABEL_7;
  }
  v13 = *(_QWORD *)(v4 + 512);
  v21.top = HIDWORD(v13);
  v21.right = v13;
  v21.left = 0;
  v21.bottom = 0;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v19);
  if ( v19 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
    }
    RGNOBJ::vSet((RGNOBJ *)&v19, &v21);
    *(_QWORD *)(*(_QWORD *)a1 + 1120LL) = v19;
    if ( v20 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
    return v2;
  }
  if ( v20 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
  return 0LL;
}
