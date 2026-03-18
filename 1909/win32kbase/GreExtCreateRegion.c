/*
 * XREFs of GreExtCreateRegion @ 0x1C0018220
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C0039C30 (NtGdiExtCreateRegion.c)
 * Callees:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C000EE80 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00116C0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0011B10 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0015C80 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0015D10 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0015DF0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     PopThreadGuardedObject @ 0x1C00172F0 (PopThreadGuardedObject.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C00199A0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     vConvertXformToMatrix @ 0x1C0019A30 (vConvertXformToMatrix.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C001B860 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00255A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007AEBC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00AD050 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00ADEA4 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

HRGN __fastcall GreExtCreateRegion(__int64 a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  HRGN v6; // rdi
  int v7; // ebx
  REGION *v8; // rsi
  REGION *v9; // r14
  HRGN v10; // rbx
  HRGN v12; // rbx
  REGION *v13; // rcx
  REGION *v14; // [rsp+20h] [rbp-99h] BYREF
  int v15; // [rsp+28h] [rbp-91h]
  _BYTE *v16; // [rsp+30h] [rbp-89h] BYREF
  int v17; // [rsp+38h] [rbp-81h]
  int v18; // [rsp+3Ch] [rbp-7Dh]
  REGION *v19; // [rsp+40h] [rbp-79h] BYREF
  int v20; // [rsp+48h] [rbp-71h]
  _BYTE v21[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v22; // [rsp+58h] [rbp-61h]
  _QWORD v23[4]; // [rsp+A0h] [rbp-19h] BYREF
  int v24; // [rsp+C0h] [rbp+7h]
  _BYTE v25[36]; // [rsp+D0h] [rbp+17h] BYREF

  right = a3->right;
  if ( a3->left != 32 || right > 0xFFFFFFD || 16 * (right + 2) > a2 )
    return 0LL;
  v6 = 0LL;
  v15 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0xD8u);
  if ( !v14 )
  {
    v13 = 0LL;
LABEL_43:
    REGION::vDeleteREGION(v13);
    v8 = 0LL;
    EngSetLastError(8u);
    goto LABEL_33;
  }
  if ( !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&v14, right, a3 + 2) )
  {
    v13 = v14;
    goto LABEL_43;
  }
  if ( !a1 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v14) == 1 )
  {
    RGNOBJ::vTighten((RGNOBJ *)&v14);
    v8 = v14;
    if ( (((*((_DWORD *)v14 + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v14 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v14 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v14 + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      REGION::vDeleteREGION(v14);
      v12 = 0LL;
    }
    else
    {
      v12 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
      if ( v12 )
      {
LABEL_32:
        v6 = v12;
        goto LABEL_33;
      }
      REGION::vDeleteREGION(v8);
    }
    v8 = 0LL;
    goto LABEL_32;
  }
  memset(v25, 0, sizeof(v25));
  vConvertXformToMatrix(a1, v25);
  *(_DWORD *)&v25[24] *= 16;
  *(_DWORD *)&v25[28] *= 16;
  v16 = v25;
  v18 = 0;
  *(__m128 *)v25 = _mm_mul_ps(*(__m128 *)v25, (__m128)_xmm);
  *(float *)&v25[20] = *(float *)&v25[20] * 16.0;
  *(float *)&v25[16] = *(float *)&v25[16] * 16.0;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v16, 8u);
  if ( (v25[32] & 0x43) != 0x43 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v21);
    if ( v22 )
    {
      v7 = RGNOBJ::bCreate((RGNOBJ *)&v14, (struct EPATHOBJ *)v21, (struct EXFORMOBJ *)&v16);
      REGION::vDeleteREGION(v14);
      v8 = 0LL;
      if ( v7 )
      {
        v17 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v16, (struct EPATHOBJ *)v21, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
        if ( !v16 )
        {
          EngSetLastError(8u);
          v10 = 0LL;
LABEL_21:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
          goto LABEL_22;
        }
        v20 = 0;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0xD8u);
        v9 = v19;
        if ( v19 )
        {
          RGNMEMOBJ::iReduce((RGNMEMOBJ *)&v19, (struct RGNOBJ *)&v16);
          RGNOBJ::vTighten((RGNOBJ *)&v19);
          v9 = v19;
          if ( (((*((_DWORD *)v19 + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
            && (((*((_DWORD *)v19 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
            && (((*((_DWORD *)v19 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
            && (((*((_DWORD *)v19 + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
          {
            v10 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v19);
            if ( !v10 )
            {
              REGION::vDeleteREGION(v9);
              v9 = 0LL;
            }
            goto LABEL_19;
          }
          REGION::vDeleteREGION(v19);
          v9 = 0LL;
        }
        else
        {
          EngSetLastError(8u);
        }
        v10 = 0LL;
LABEL_19:
        if ( v20 == 1 )
          REGION::vDeleteREGION(v9);
        goto LABEL_21;
      }
    }
    else
    {
      EngSetLastError(8u);
      REGION::vDeleteREGION(v14);
      v8 = 0LL;
    }
    v10 = 0LL;
LABEL_22:
    EPATHOBJ::vUnlock((EPATHOBJ *)v21);
    if ( v24 )
    {
      PopThreadGuardedObject(v23);
      v24 = 0;
    }
    goto LABEL_24;
  }
  RGNOBJ::vTighten((RGNOBJ *)&v14);
  v8 = v14;
  if ( (((*((_DWORD *)v14 + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v14 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v14 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v14 + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    v10 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
    if ( !v10 )
    {
      REGION::vDeleteREGION(v8);
      v8 = 0LL;
    }
    goto LABEL_24;
  }
  REGION::vDeleteREGION(v14);
  v8 = 0LL;
LABEL_33:
  v10 = v6;
LABEL_24:
  if ( v15 == 1 )
    REGION::vDeleteREGION(v8);
  return v10;
}
