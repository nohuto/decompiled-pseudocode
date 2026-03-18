/*
 * XREFs of xxxNotifyIMEStatus @ 0x1C00F64D0
 * Callers:
 *     NtUserNotifyIMEStatus @ 0x1C00F6420 (NtUserNotifyIMEStatus.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxNotifyIMEStatus(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 v3; // r9
  __int64 v5; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // al
  char v13; // al
  __int64 v14; // rcx
  char v15; // al
  char v16; // al
  __int64 v17; // rcx
  char v18; // al
  char v19; // al
  char *v20; // rcx
  char v21; // al
  int i; // r10d
  int j; // r10d
  __int64 v24; // rax
  char v25; // cl
  __int64 v26; // rcx
  char v27; // al

  v3 = a1[2];
  v5 = 0LL;
  if ( v3 )
  {
    if ( gpqForeground )
    {
      if ( *(unsigned __int64 **)(gpqForeground + 112LL) == a1 )
      {
        v7 = *(_QWORD *)(a1[5] + 208);
        if ( gHimcFocus != v7 || gdwIMEConversionStatus != a3 || gdwIMEOpenStatus != a2 )
        {
          gHimcFocus = v7;
          if ( v7 )
          {
            gdwIMEConversionStatus = a3;
            gdwIMEOpenStatus = a2 != 0;
            v8 = *(_QWORD *)(v3 + 432);
            v9 = a2 != 0 ? a3 : 0;
            if ( v8 )
            {
              if ( (*(_WORD *)(v8 + 40) & 0x3FF) == 0x11 )
              {
                *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) &= ~1u;
                *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) &= ~2u;
                *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) &= ~4u;
                *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) &= ~8u;
                *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) &= ~0x10u;
                *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) &= ~0x20u;
                if ( (v9 & 1) != 0 )
                {
                  v20 = (char *)(*(_QWORD *)(v3 + 424) + 288LL);
                  v21 = *v20;
                  if ( (v9 & 2) != 0 )
                  {
                    *v20 = v21 | 4;
                    *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) |= 8u;
                  }
                  else
                  {
                    *v20 = v21 | 0x10;
                    *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) |= 0x20u;
                  }
                }
                else
                {
                  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) |= i )
                    ++i;
                }
                if ( (v9 & 8) != 0 )
                {
                  for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(v3 + 424) + 289LL) |= j )
                    ++j;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 288LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 289LL) &= ~1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 289LL) &= ~2u;
                }
                v24 = *(_QWORD *)(v3 + 424);
                v25 = *(_BYTE *)(v24 + 289);
                if ( (v9 & 0x10) != 0 )
                {
                  *(_BYTE *)(v24 + 289) = v25 | 4;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 289LL) |= 8u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 289LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 289LL) &= ~0x20u;
                }
                else
                {
                  *(_BYTE *)(v24 + 289) = v25 | 0x10;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 289LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 289LL) &= ~4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 289LL) &= ~8u;
                }
                v26 = *(_QWORD *)(v3 + 424);
                v27 = *(_BYTE *)(v26 + 290);
                if ( (v9 & 0x20) != 0 )
                {
                  *(_BYTE *)(v26 + 290) = v27 | 0x10;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 290LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 290LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 290LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(v26 + 290) = v27 | 0x40;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 290LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 290LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 424) + 290LL) &= ~0x20u;
                }
              }
              else if ( (*(_WORD *)(v8 + 40) & 0x3FF) == 0x12 )
              {
                v11 = *(_QWORD *)(v3 + 424);
                v12 = *(_BYTE *)(v11 + 233);
                if ( (v9 & 1) != 0 )
                  v13 = v12 | 8;
                else
                  v13 = v12 & 0xF7;
                *(_BYTE *)(v11 + 233) = v13;
                v14 = *(_QWORD *)(v3 + 424);
                v15 = *(_BYTE *)(v14 + 233);
                if ( (v9 & 8) != 0 )
                  v16 = v15 | 0x80;
                else
                  v16 = v15 & 0x7F;
                *(_BYTE *)(v14 + 233) = v16;
                v17 = *(_QWORD *)(v3 + 424);
                v18 = *(_BYTE *)(v17 + 234);
                if ( (v9 & 0x40) != 0 )
                  v19 = v18 | 8;
                else
                  v19 = v18 & 0xF7;
                *(_BYTE *)(v17 + 234) = v19;
              }
            }
          }
          v10 = *(_QWORD *)(v3 + 432);
          if ( v10 )
            v5 = *(_QWORD *)(v10 + 40);
          if ( ((*(_DWORD *)(v3 + 672) | *(_DWORD *)(**(_QWORD **)(v3 + 456) + 16LL)) & 0x800) != 0 )
            xxxCallHook(8, *a1, v5, 10);
          NlsKbdSendIMENotificationBase(gdwIMEOpenStatus, (unsigned int)gdwIMEConversionStatus, v5);
        }
      }
    }
  }
}
