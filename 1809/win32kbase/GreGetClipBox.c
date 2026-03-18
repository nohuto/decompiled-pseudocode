/*
 * XREFs of GreGetClipBox @ 0x1C001C680
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0018824 (bCvtPts1.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C001AA00 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C001C5CC (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C001C84C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001C89C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C001DE64 (--0DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0024770 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, _DWORD *a2, int a3)
{
  unsigned int v5; // ebx
  DC *v6; // r10
  struct REGION *v7; // rax
  DC *v8; // r10
  struct REGION *v9; // rsi
  int v10; // r8d
  int v11; // r9d
  int v12; // r11d
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  DC *v16; // rax
  int v17; // eax
  int v18; // ecx
  float *v19; // [rsp+28h] [rbp-69h] BYREF
  int v20; // [rsp+30h] [rbp-61h]
  int v21; // [rsp+34h] [rbp-5Dh]
  DC *v22[6]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v23[32]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v24[80]; // [rsp+88h] [rbp-9h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( v22[0] )
  {
    DCOBJ::DCOBJ((DCOBJ *)v24);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v22, 1);
    if ( (v23[24] & 1) != 0 )
    {
      if ( DC::prgnRao(v22[0]) )
        v7 = DC::prgnRao(v6);
      else
        v7 = DC::prgnVisSnap(v6);
      v9 = v7;
      *(_OWORD *)a2 = *(_OWORD *)((char *)v7 + 88);
      v10 = a2[2];
      if ( *a2 >= v10 || (v11 = a2[1], v12 = a2[3], v11 >= v12) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v13 = (_DWORD *)((char *)v8 + 1024);
        if ( (*((_DWORD *)v8 + 10) & 1) == 0 )
          v13 = (_DWORD *)((char *)v8 + 1016);
        *a2 -= *v13;
        a2[2] = v10 - *v13;
        a2[1] = v11 - v13[1];
        a2[3] = v12 - v13[1];
        if ( a3 )
        {
          v14 = *((_QWORD *)v8 + 122);
          v20 = *(_DWORD *)(v14 + 208);
          v21 = *(_DWORD *)(v14 + 108) & 1;
          EXFORMOBJ::vInit(&v19, v22, 1026, 0x80000000);
          if ( v19 )
          {
            if ( ((_BYTE)v19[8] & 0x43) != 0x43 )
              bCvtPts1((unsigned __int64)v19, a2, 2LL);
            if ( v21 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v8 = v22[0];
        }
        if ( (*(_DWORD *)(*((_QWORD *)v8 + 122) + 108LL) & 1) != 0 )
        {
          v17 = *a2;
          v18 = a2[2];
          if ( *a2 > v18 )
          {
            *a2 = v18;
            a2[2] = v17;
          }
        }
      }
      if ( *((_DWORD *)v9 + 21) != 1 )
      {
        LOBYTE(v5) = *((_DWORD *)v9 + 20) > 0xA0u;
        v5 += 2;
LABEL_19:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
        DCOBJ::~DCOBJ((DCOBJ *)v24);
        goto LABEL_20;
      }
    }
    else
    {
      v16 = v22[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v16 + 62) && (*((_DWORD *)v16 + 9) & 0x5000) != 0x1000 )
        goto LABEL_19;
    }
    v5 = 1;
    goto LABEL_19;
  }
LABEL_20:
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v5;
}
