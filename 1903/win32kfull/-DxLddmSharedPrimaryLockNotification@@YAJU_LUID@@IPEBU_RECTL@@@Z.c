/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0273284
 * Callers:
 *     NtGdiDdDDISharedPrimaryLockNotification @ 0x1C0275440 (NtGdiDdDDISharedPrimaryLockNotification.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00832CC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0273D10 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027E224 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall DxLddmSharedPrimaryLockNotification(struct _LUID a1, int a2, const struct _RECTL *a3)
{
  DWORD LowPart; // ebx
  unsigned int v4; // edi
  int v5; // r12d
  int v7; // esi
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  HDEV i; // rcx
  int v10; // eax
  struct _LUID *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  HDEV v15; // r15
  unsigned int CurrentProcessId; // eax
  LONG top; // ecx
  unsigned int v18; // r9d
  LONG right; // r9d
  struct tagSIZE v20; // rax
  int v21; // r9d
  struct tagSIZE v22; // rax
  int v23; // r10d
  _DWORD *ProcessEntry; // rsi
  _DWORD *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  struct _RECTL *v28; // rdx
  LONG v29; // eax
  LONG v30; // eax
  LONG bottom; // eax
  HDEV v32; // rax
  HDEV v33; // r13
  HDEV v35; // [rsp+20h] [rbp-60h] BYREF
  char v36[4]; // [rsp+28h] [rbp-58h] BYREF
  int v37; // [rsp+2Ch] [rbp-54h]
  __int64 v38; // [rsp+30h] [rbp-50h]
  struct _LUID v39; // [rsp+38h] [rbp-48h]
  __int64 v40; // [rsp+60h] [rbp-20h] BYREF
  __int64 v41; // [rsp+68h] [rbp-18h]

  LowPart = a1.LowPart;
  v39 = a1;
  v4 = 0;
  v37 = a2;
  v5 = 0;
  v7 = a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
  if ( !g_pDwmState )
  {
    for ( i = 0LL; ; i = v33 )
    {
      v32 = (HDEV)hdevEnumerate(i);
      v33 = v32;
      if ( !v32 )
        break;
      v35 = v32;
      v10 = *((_DWORD *)v32 + 10);
      if ( (v10 & 0x400) == 0 && (v10 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v35) )
        {
          if ( LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v35)->LowPart )
          {
            v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v35);
            if ( v39.HighPart == v11->HighPart && *(_DWORD *)(*((_QWORD *)v35 + 322) + 256LL) == v7 )
            {
              GreLockVisRgn(v35, v12, v13, v14);
              GreLockSprite(v35);
              GreLockDisplayDevice(v35);
              v15 = v35 + 656;
              CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
              v40 = 0LL;
              v41 = 0LL;
              top = a3->top;
              v38 = CurrentProcessId & 0xFFFFFFFC;
              if ( top || a3->left || a3->right || a3->bottom )
              {
                right = a3->right;
                if ( right <= a3->left
                  || a3->bottom <= top
                  || a3->left < 0
                  || right < 0
                  || (v20 = PDEVOBJ::sizl((PDEVOBJ *)&v35), v21 > *(_DWORD *)v20.cx)
                  || (v22 = PDEVOBJ::sizl((PDEVOBJ *)&v35), v23 > *(_DWORD *)(*(_QWORD *)&v22 + 4LL)) )
                {
                  v5 = -1073741811;
                }
                v18 = v38;
              }
              else
              {
                LODWORD(v41) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v35).cx;
                a3 = (const struct _RECTL *)&v40;
                HIDWORD(v41) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v35) + 4LL);
              }
              if ( v5 >= 0 )
              {
                ProcessEntry = (_DWORD *)DxLddmFindProcessEntry(v15, v18);
                if ( !ProcessEntry )
                {
                  v25 = PALLOCMEM2(0x30uLL, 1684305988LL, 1);
                  if ( v25 )
                  {
                    v25[4] = v38;
                    v26 = *(_QWORD *)v15;
                    if ( *(HDEV *)(*(_QWORD *)v15 + 8LL) != v15 )
                      __fastfail(3u);
                    *(_QWORD *)v25 = v26;
                    ProcessEntry = v25;
                    *((_QWORD *)v25 + 1) = v15;
                    *(_QWORD *)(v26 + 8) = v25;
                    *(_QWORD *)v15 = v25;
                  }
                  else
                  {
                    v5 = -1073741801;
                  }
                }
                if ( v5 >= 0 )
                {
                  ++ProcessEntry[5];
                  ++*((_DWORD *)v35 + 660);
                  v27 = ProcessEntry[6];
                  if ( v27 != -1 )
                    ProcessEntry[6] = v27 + 1;
                  v28 = (struct _RECTL *)(ProcessEntry + 7);
                  if ( ProcessEntry[5] == 1 )
                  {
                    *v28 = *a3;
                    ProcessEntry[11] = giVisRgnUniqueness;
                  }
                  else
                  {
                    if ( a3->left < v28->left )
                      v28->left = a3->left;
                    v29 = a3->top;
                    if ( v29 < ProcessEntry[8] )
                      ProcessEntry[8] = v29;
                    v30 = a3->right;
                    if ( v30 > ProcessEntry[9] )
                      ProcessEntry[9] = v30;
                    bottom = a3->bottom;
                    if ( bottom > ProcessEntry[10] )
                      ProcessEntry[10] = bottom;
                  }
                  bSpTearDownSprites(v35, v28, 1);
                  PDEVOBJ::vSync(
                    (PDEVOBJ *)&v35,
                    (struct _SURFOBJ *)((*((_QWORD *)v35 + 319) + 24LL) & -(__int64)(*((_QWORD *)v35 + 319) != 0LL)),
                    0LL,
                    6u);
                }
                v7 = v37;
              }
              GreUnlockDisplayDevice(v35);
              GreUnlockSprite(v35);
              GreUnlockVisRgn(v35);
            }
          }
        }
      }
    }
    v4 = v5;
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  return v4;
}
