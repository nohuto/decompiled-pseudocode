/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C02599A4
 * Callers:
 *     NtGdiDdDDISharedPrimaryLockNotification @ 0x1C025BD70 (NtGdiDdDDISharedPrimaryLockNotification.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0094ACC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C025A438 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026500C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
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
  HDEV v12; // r15
  unsigned int CurrentProcessId; // eax
  LONG top; // ecx
  unsigned int v15; // r9d
  LONG right; // r9d
  struct tagSIZE v17; // rax
  int v18; // r9d
  struct tagSIZE v19; // rax
  int v20; // r10d
  _DWORD *ProcessEntry; // rsi
  _DWORD *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  struct _RECTL *v25; // rdx
  LONG v26; // eax
  LONG v27; // eax
  LONG bottom; // eax
  HDEV v29; // rax
  HDEV v30; // r13
  HDEV v32; // [rsp+20h] [rbp-60h] BYREF
  char v33[4]; // [rsp+28h] [rbp-58h] BYREF
  int v34; // [rsp+2Ch] [rbp-54h]
  __int64 v35; // [rsp+30h] [rbp-50h]
  struct _LUID v36; // [rsp+38h] [rbp-48h]
  __int64 v37; // [rsp+60h] [rbp-20h] BYREF
  int v38; // [rsp+68h] [rbp-18h]
  int v39; // [rsp+6Ch] [rbp-14h]

  LowPart = a1.LowPart;
  v36 = a1;
  v4 = 0;
  v34 = a2;
  v5 = 0;
  v7 = a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v33);
  if ( !g_pDwmState )
  {
    for ( i = 0LL; ; i = v30 )
    {
      v29 = (HDEV)hdevEnumerate(i);
      v30 = v29;
      if ( !v29 )
        break;
      v32 = v29;
      v10 = *((_DWORD *)v29 + 10);
      if ( (v10 & 0x400) == 0 && (v10 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v32) )
        {
          if ( LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v32)->LowPart )
          {
            v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v32);
            if ( v36.HighPart == v11->HighPart && *(_DWORD *)(*((_QWORD *)v32 + 322) + 256LL) == v7 )
            {
              GreLockVisRgn(v32);
              GreLockSprite(v32);
              GreLockDisplayDevice(v32);
              v12 = v32 + 656;
              CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
              top = a3->top;
              v35 = CurrentProcessId & 0xFFFFFFFC;
              if ( top || a3->left || a3->right || a3->bottom )
              {
                right = a3->right;
                if ( right <= a3->left
                  || a3->bottom <= top
                  || a3->left < 0
                  || right < 0
                  || (v17 = PDEVOBJ::sizl((PDEVOBJ *)&v32), v18 > *(_DWORD *)v17.cx)
                  || (v19 = PDEVOBJ::sizl((PDEVOBJ *)&v32), v20 > *(_DWORD *)(*(_QWORD *)&v19 + 4LL)) )
                {
                  v5 = -1073741811;
                }
                v15 = v35;
              }
              else
              {
                v37 = 0LL;
                v38 = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v32).cx;
                a3 = (const struct _RECTL *)&v37;
                v39 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v32) + 4LL);
              }
              if ( v5 >= 0 )
              {
                ProcessEntry = (_DWORD *)DxLddmFindProcessEntry(v12, v15);
                if ( !ProcessEntry )
                {
                  v22 = PALLOCMEM2(0x30uLL, 1684305988LL, 1);
                  if ( v22 )
                  {
                    v22[4] = v35;
                    v23 = *(_QWORD *)v12;
                    if ( *(HDEV *)(*(_QWORD *)v12 + 8LL) != v12 )
                      __fastfail(3u);
                    *(_QWORD *)v22 = v23;
                    ProcessEntry = v22;
                    *((_QWORD *)v22 + 1) = v12;
                    *(_QWORD *)(v23 + 8) = v22;
                    *(_QWORD *)v12 = v22;
                  }
                  else
                  {
                    v5 = -1073741801;
                  }
                }
                if ( v5 >= 0 )
                {
                  ++ProcessEntry[5];
                  ++*((_DWORD *)v32 + 660);
                  v24 = ProcessEntry[6];
                  if ( v24 != -1 )
                    ProcessEntry[6] = v24 + 1;
                  v25 = (struct _RECTL *)(ProcessEntry + 7);
                  if ( ProcessEntry[5] == 1 )
                  {
                    *v25 = *a3;
                    ProcessEntry[11] = giVisRgnUniqueness;
                  }
                  else
                  {
                    if ( a3->left < v25->left )
                      v25->left = a3->left;
                    v26 = a3->top;
                    if ( v26 < ProcessEntry[8] )
                      ProcessEntry[8] = v26;
                    v27 = a3->right;
                    if ( v27 > ProcessEntry[9] )
                      ProcessEntry[9] = v27;
                    bottom = a3->bottom;
                    if ( bottom > ProcessEntry[10] )
                      ProcessEntry[10] = bottom;
                  }
                  bSpTearDownSprites(v32, v25, 1);
                  PDEVOBJ::vSync(
                    (PDEVOBJ *)&v32,
                    (struct _SURFOBJ *)((*((_QWORD *)v32 + 319) + 24LL) & -(__int64)(*((_QWORD *)v32 + 319) != 0LL)),
                    0LL,
                    6u);
                }
                v7 = v34;
              }
              GreUnlockDisplayDevice(v32);
              GreUnlockSprite(v32);
              GreUnlockVisRgn(v32);
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
