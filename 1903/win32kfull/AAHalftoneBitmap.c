/*
 * XREFs of AAHalftoneBitmap @ 0x1C00371B0
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C0036ED8 (HT_HalftoneBitmap.c)
 * Callees:
 *     SetGrayColorTable @ 0x1C000A4F8 (SetGrayColorTable.c)
 *     ValidateHTSI @ 0x1C0037478 (ValidateHTSI.c)
 *     CreateDyesColorMappingTable @ 0x1C003786C (CreateDyesColorMappingTable.c)
 *     SetupAAHeader @ 0x1C00381C0 (SetupAAHeader.c)
 *     InitializeFUDI @ 0x1C013D728 (InitializeFUDI.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     GetDstBFInfo @ 0x1C025DD14 (GetDstBFInfo.c)
 *     FindBGRMapCache @ 0x1C025EB50 (FindBGRMapCache.c)
 */

__int64 __fastcall AAHalftoneBitmap(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r13
  __int64 v4; // rdi
  int v5; // ebx
  _BYTE *v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r14d
  unsigned __int8 v9; // si
  int v10; // edx
  unsigned int v11; // ebx
  int v12; // r14d
  int v13; // r12d
  char v14; // r12
  __int64 (__fastcall *v15)(int, int, int, int, __int64); // rcx
  __int64 (__fastcall *v16)(int, int, int, int, __int64, __int64, __int64, int, int); // rax
  bool v17; // zf
  unsigned __int8 v19; // r14
  __int64 v20; // rax
  _OWORD *v21; // rdx
  _OWORD *v22; // rax
  __int64 v23; // rcx
  __int128 v24; // xmm1
  bool v25; // zf
  __int64 (__fastcall *v26)(int, int, int, int, __int64, __int64, __int64, int); // rax
  int v27; // ecx
  char v28; // al
  char v29; // al
  char v30; // cl
  char v31; // al
  bool v32; // zf
  __int64 (__fastcall *v33)(int, int, int, int, __int64, __int64, __int64, int, __int64); // rax
  __int64 v34; // r11
  void *v35; // r10
  unsigned __int8 *v36; // rdx
  __int64 v37; // rax
  char v38; // al
  char v39; // al
  __int64 v40; // rcx
  int v41; // [rsp+20h] [rbp-38h]
  void *v42; // [rsp+28h] [rbp-30h]
  __int64 v43; // [rsp+30h] [rbp-28h]
  __int64 v44; // [rsp+38h] [rbp-20h]
  __int64 (__fastcall *v45[3])(_QWORD); // [rsp+40h] [rbp-18h] BYREF
  int DyesColorMappingTable; // [rsp+A0h] [rbp+48h]
  int v47; // [rsp+B0h] [rbp+58h]
  int v48; // [rsp+B8h] [rbp+60h]

  v1 = *a1;
  v2 = a1[1];
  v4 = a1[6];
  v43 = *a1;
  v5 = ValidateHTSI(a1, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ValidateHTSI(a1, 1LL);
    if ( v5 >= 0 )
    {
      v5 = ValidateHTSI(a1, 2LL);
      if ( v5 >= 0 )
      {
        v5 = SetupAAHeader(a1, v1, v4, v45);
        if ( v5 > 0 )
        {
          DyesColorMappingTable = CreateDyesColorMappingTable(a1);
          v8 = DyesColorMappingTable;
          if ( DyesColorMappingTable <= 0 )
            goto LABEL_100;
          v42 = 0LL;
          v9 = *(_BYTE *)(v2 + 31);
          v10 = *(_DWORD *)v4;
          v11 = *(_DWORD *)(v4 + 444);
          v44 = *(_QWORD *)(v4 + 136);
          v41 = 1;
          v47 = *(_DWORD *)v4;
          v12 = *(_DWORD *)(*(_QWORD *)(v4 + 304) + 4LL);
          v48 = *(_DWORD *)(v2 + 56) & 0x2000000;
          if ( v48 )
            v42 = (void *)(v43 + 548);
          v13 = *(_DWORD *)v4 & 0x800;
          if ( v10 < 0 )
          {
            v41 = 0;
            v17 = v13 == 0;
            v14 = *(_DWORD *)v4;
            if ( !v17 )
            {
              v20 = *(_QWORD *)(v43 + 7064);
              *(_QWORD *)(v4 + 336) = v20;
              if ( (v10 & 0x1000) != 0 )
                *(_QWORD *)(v4 + 336) = v20 + 768;
            }
          }
          else
          {
            memmove(*(void **)(v4 + 376), (const void *)(v43 + 856), 0xC1CuLL);
            v17 = v13 == 0;
            v14 = v47;
            if ( !v17 )
            {
              v21 = *(_OWORD **)(v43 + 7064);
              v22 = *(_OWORD **)(v4 + 336);
              if ( (v47 & 0x1000) != 0 )
              {
                memmove(*(void **)(v4 + 336), v21 + 48, 0x800uLL);
              }
              else
              {
                v23 = 6LL;
                do
                {
                  *v22 = *v21;
                  v22[1] = v21[1];
                  v22[2] = v21[2];
                  v22[3] = v21[3];
                  v22[4] = v21[4];
                  v22[5] = v21[5];
                  v22[6] = v21[6];
                  v22 += 8;
                  v24 = v21[7];
                  v21 += 8;
                  *(v22 - 1) = v24;
                  --v23;
                }
                while ( v23 );
              }
            }
            EngReleaseSemaphore(*(HSEMAPHORE *)(v43 + 8));
          }
          if ( (*(_BYTE *)(v4 + 8) & 4) != 0 )
            SetGrayColorTable(*(_OWORD **)(v4 + 384), v4 + 8);
          if ( *(_DWORD *)(v4 + 528) )
            InitializeFUDI(v4);
          *(_QWORD *)(v4 + 560) -= 4LL;
          if ( v9 > 0xF9u )
          {
            if ( v9 == 0xFA )
            {
              v32 = v48 == 0;
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_B332;
              v33 = OutputAATo8BPP_B332_XLATE;
LABEL_94:
              if ( !v32 )
                v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))v33;
              goto LABEL_38;
            }
            if ( v9 == 0xFB )
            {
              BYTE1(v42) = *(_BYTE *)(*(_QWORD *)(v4 + 376) + 17LL);
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_MONO;
LABEL_38:
              v8 = DyesColorMappingTable;
              goto LABEL_24;
            }
            if ( v9 <= 0xFDu )
            {
              v38 = (char)v42;
              if ( (v44 & 3) != 0 )
                v38 = 1;
              LOBYTE(v42) = v38;
              v39 = v12 - 1;
              if ( (v44 & 3) == 0 )
                v39 = v12;
              if ( (v39 & 1) != 0 )
              {
                *(_QWORD *)(v4 + 568) -= 4LL;
                BYTE3(v42) = 1;
              }
              if ( (_BYTE)v11 )
              {
                v8 = DyesColorMappingTable;
                if ( (_BYTE)v11 == 4 )
                {
                  v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_555_BGR;
                  v17 = v9 == 0xFD;
                  v16 = OutputAATo16BPP_565_BGR;
LABEL_22:
                  if ( !v17 )
                    v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))v16;
                  goto LABEL_24;
                }
                v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_ExtBGR;
                goto LABEL_24;
              }
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_RGB;
              v25 = v9 == 0xFD;
              v26 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo16BPP_555_RGB;
              goto LABEL_52;
            }
            if ( v9 == 0xFE )
            {
              v34 = a1[7];
              v6 = *(_BYTE **)(v4 + 400);
              if ( v34 )
              {
                v35 = *(void **)(v4 + 400);
                if ( v6 )
                {
                  v36 = (unsigned __int8 *)&VGA256Xlate;
                  LODWORD(v7) = 366;
                  do
                  {
                    v37 = *v36++;
                    *v6++ = *(_BYTE *)(v37 + v34);
                    v17 = (_DWORD)v7 == 1;
                    v7 = (unsigned int)(v7 - 1);
                  }
                  while ( !v17 );
                }
              }
              else
              {
                v35 = &VGA256Xlate;
              }
              v42 = v35;
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA256;
              goto LABEL_38;
            }
          }
          else
          {
            if ( v9 >= 0xF8u )
              goto LABEL_60;
            switch ( v9 )
            {
              case 1u:
                BYTE1(v42) = -((v14 & 4) == 0);
                if ( *(_BYTE *)(v4 + 97) )
                {
                  v27 = 8 - *(unsigned __int8 *)(v4 + 97);
                  v28 = v12;
                  v12 -= v27;
                  if ( v12 < 0 )
                  {
                    LOBYTE(v27) = v28;
                    BYTE2(v42) = -(char)v12;
                    LOBYTE(v12) = 0;
                  }
                  LOBYTE(v42) = v27;
                }
                v19 = v12 & 7;
                BYTE3(v42) = v19;
                if ( v19 )
                  *(_QWORD *)(v4 + 568) += -4LL * v19;
                v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo1BPP;
                goto LABEL_38;
              case 5u:
                v8 = DyesColorMappingTable;
                *(_WORD *)((char *)&v42 + 1) = v11 >> 8;
                BYTE3(v42) = HIBYTE(v11);
                LOBYTE(v42) = v11;
                if ( (_BYTE)v11 )
                {
                  v15 = OutputAATo24BPP_BGR;
                  v16 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo24BPP_ORDER;
LABEL_21:
                  v17 = (_BYTE)v11 == 4;
                  goto LABEL_22;
                }
                v15 = OutputAATo24BPP_RGB;
                goto LABEL_24;
              case 6u:
                v8 = DyesColorMappingTable;
                *(_WORD *)((char *)&v42 + 1) = v11 >> 8;
                BYTE3(v42) = HIBYTE(v11);
                LOBYTE(v42) = v11;
                if ( (_BYTE)v11 )
                {
                  v15 = OutputAATo32BPP_BGR;
                  v16 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo32BPP_ORDER;
                  goto LABEL_21;
                }
                v15 = OutputAATo32BPP_RGB;
LABEL_24:
                *(_QWORD *)(v4 + 272) = v15;
                if ( v15 )
                {
                  v17 = (*(_DWORD *)v4 & 0x800) == 0;
                  *(_QWORD *)(v4 + 280) = v42;
                  if ( !v17 )
                  {
                    LOBYTE(v7) = v11;
                    LOBYTE(v6) = v9;
                    GetDstBFInfo(v4, *(_QWORD *)(a1[2] + 8), v6, v7);
                  }
                  v8 = v45[0](v4);
                }
                if ( (v14 & 0x18) != 0 )
                {
                  v40 = *(_QWORD *)(v4 + 392);
                  if ( v40 )
                    FindBGRMapCache(v40, 0LL);
                }
                if ( v41 )
                  goto LABEL_30;
                v1 = v43;
LABEL_100:
                EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
LABEL_30:
                EngFreeMem(*(PVOID *)(v4 + 304));
                EngFreeMem(*(PVOID *)(v4 + 312));
                return v8;
            }
            if ( v9 != 2 )
            {
              if ( v9 <= 0xF4u )
              {
                v15 = 0LL;
                v8 = -11;
                goto LABEL_24;
              }
              if ( v9 > 0xF6u )
              {
                v25 = v48 == 0;
                v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_B332_XLATE;
                v26 = OutputAATo8BPP_K_B332;
LABEL_52:
                if ( v25 )
                  v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))v26;
                goto LABEL_38;
              }
LABEL_60:
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_XLATE;
              v42 = *(&p8BPPXlate + *(unsigned __int8 *)(*(_QWORD *)(v4 + 376) + 16LL));
              if ( (unsigned __int8)(v9 + 8) > 1u )
                v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_XLATE;
              goto LABEL_38;
            }
          }
          v29 = (char)v42;
          BYTE1(v42) = (v14 & 4) == 0 ? 0x77 : 0;
          v30 = *(_BYTE *)(v4 + 97);
          if ( v30 )
            v29 = 1;
          LOBYTE(v42) = v29;
          v31 = v12 - 1;
          if ( !v30 )
            v31 = v12;
          if ( (v31 & 1) != 0 )
          {
            *(_QWORD *)(v4 + 568) -= 4LL;
            BYTE3(v42) = 1;
          }
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo4BPP;
          v32 = v9 == 2;
          v33 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, __int64))OutputAAToVGA16;
          goto LABEL_94;
        }
      }
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
  return (unsigned int)v5;
}
