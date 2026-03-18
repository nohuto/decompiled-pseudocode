/*
 * XREFs of ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00AB930
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C0022200 (bDeleteDCInternalEx.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00779A0 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C001ADA8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0076894 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00778D4 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007933C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0122E9C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall bDeleteDCOBJ(struct HOBJ__ ***this, unsigned int *a2, int *a3)
{
  int v3; // esi
  struct HOBJ__ **v5; // rcx
  unsigned int *v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  ULONG v9; // ecx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *this;
  if ( a2 )
  {
    *((_DWORD *)v5 + 9) |= *a2 & 0x1C00000;
    v6 = a2;
    v5 = *this;
  }
  else
  {
    v6 = (unsigned int *)v5 + 9;
  }
  v7 = *v6;
  v8 = *((_DWORD *)v5 + 9);
  if ( (v8 & 8) != 0 )
  {
    if ( (v7 & 0x400000) != 0 )
      *((_DWORD *)v5 + 9) = v8 & 0xFFFFFFF7;
    else
      v3 = 1;
  }
  *a3 = v3;
  if ( !a2 && !(unsigned int)HmgQueryRemoveAttempted(**this, 0) )
  {
    v9 = 5023;
LABEL_11:
    EngSetLastError(v9);
    return 0LL;
  }
  if ( *((_WORD *)*this + 6) > 1u && (v7 & 0x1C00000) == 0 )
  {
    v9 = 170;
    goto LABEL_11;
  }
  if ( v3 )
  {
    XDCOBJ::bCleanDC((DC **)this, HIBYTE(v7) & 1);
  }
  else
  {
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v17,
      ((*((_DWORD *)(*this)[6] + 10) >> 7) & 1) == 0,
      (__int64)a3);
    if ( !HmgLockObjectForRemoval(**this, v11, v12) )
    {
      EngSetLastError(0xAAu);
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v17, v13, v14);
      return 0LL;
    }
    XDCOBJ::bCleanDC((DC **)this, HIBYTE(v7) & 1);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v17, v15, v16);
    vDeleteDCInternalWorker((struct DC **)this, (v7 >> 23) & 1);
  }
  return 1LL;
}
