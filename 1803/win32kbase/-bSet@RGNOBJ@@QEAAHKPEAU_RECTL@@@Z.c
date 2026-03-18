/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0021700
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0021700 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0020DF0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0021700 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0021CA0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3)
{
  __int64 v3; // rdi
  unsigned int v5; // esi
  int v6; // edx
  int right; // ecx
  LONG top; // r8d
  LONG bottom; // r9d
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]
  int v20; // [rsp+88h] [rbp+38h]
  unsigned int v21; // [rsp+88h] [rbp+38h]

  v16 = 0;
  v3 = a2;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v15, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
  v14 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v13, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v13);
  if ( !v15 || !v13 )
    goto LABEL_21;
  v5 = 1;
  if ( (unsigned int)v3 >= 0x14 )
  {
    v18 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v17, 0xD8u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
    v11 = (unsigned int)v3 >> 1;
    v12 = v3 - ((unsigned int)v3 >> 1);
    v21 = v11;
    if ( v17
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v15, v11, a3)
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v13, v12, &a3[v21]) )
    {
      RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v15, 2);
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v17);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
      goto LABEL_14;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
LABEL_21:
    v5 = 0;
    goto LABEL_14;
  }
  v6 = 0;
  v20 = 0;
  if ( (_DWORD)v3 )
  {
    do
    {
      right = a3->right;
      if ( a3->left < right )
      {
        top = a3->top;
        bottom = a3->bottom;
        if ( top < bottom && a3->left >= -134217728 && right <= 0x7FFFFFF && top >= -134217728 && bottom <= 0x7FFFFFF )
        {
          if ( v6 )
          {
            RGNOBJ::vSet((RGNOBJ *)&v15, a3);
            RGNOBJ::iCombine((RGNOBJ *)&v13, this, (struct RGNOBJ *)&v15, 2);
            RGNOBJ::vSwap(this, (struct RGNOBJ *)&v13);
            v6 = v20;
          }
          else
          {
            RGNOBJ::vSet(this, a3);
            v6 = 1;
            v20 = 1;
          }
        }
      }
      ++a3;
      --v3;
    }
    while ( v3 );
  }
LABEL_14:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
  return v5;
}
