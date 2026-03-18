/*
 * XREFs of AAHalftoneBitmap @ 0x1C00D09A8
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00D06DC (HT_HalftoneBitmap.c)
 * Callees:
 *     ValidateHTSI @ 0x1C00D0C64 (ValidateHTSI.c)
 *     CreateDyesColorMappingTable @ 0x1C00D1038 (CreateDyesColorMappingTable.c)
 *     SetupAAHeader @ 0x1C00D1908 (SetupAAHeader.c)
 *     InitializeFUDI @ 0x1C0126F3C (InitializeFUDI.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     GetDstBFInfo @ 0x1C022EE74 (GetDstBFInfo.c)
 *     FindBGRMapCache @ 0x1C022FCF0 (FindBGRMapCache.c)
 *     SetGrayColorTable @ 0x1C0233BC0 (SetGrayColorTable.c)
 */

__int64 __fastcall AAHalftoneBitmap(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // r9
  unsigned int v7; // esi
  unsigned int v8; // ebx
  int v9; // r12d
  int v10; // esi
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm1
  unsigned __int64 v16; // r8
  __int64 (__fastcall *v17)(int, int, int, int, __int64); // rcx
  __int64 (__fastcall *v18)(int, int, int, int, __int64, __int64, __int64, int, int); // rax
  bool v19; // zf
  __int64 v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  __int64 v25; // rdx
  __int128 v26; // xmm1
  __int64 v27; // rdx
  __int128 v28; // xmm1
  bool v29; // zf
  __int64 (__fastcall *v30)(int, int, int, int, __int64, __int64, __int64, int); // rax
  int v31; // eax
  char v32; // cl
  unsigned __int8 v33; // si
  bool v34; // zf
  __int64 (__fastcall *v35)(int, int, int, int, __int64, __int64, __int64, int, __int64); // rax
  __int64 v36; // r11
  void *v37; // r10
  unsigned __int8 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  void *v41; // [rsp+20h] [rbp-28h]
  __int64 v42; // [rsp+28h] [rbp-20h]
  __int64 (__fastcall *v43[3])(_QWORD); // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v44; // [rsp+90h] [rbp+48h]
  int DyesColorMappingTable; // [rsp+98h] [rbp+50h]
  int v46; // [rsp+A8h] [rbp+60h]

  v1 = *a1;
  v2 = a1[1];
  v4 = a1[6];
  v5 = ValidateHTSI(a1, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ValidateHTSI(a1, 1LL);
    if ( v5 >= 0 )
    {
      v5 = ValidateHTSI(a1, 2LL);
      if ( v5 >= 0 )
      {
        v5 = SetupAAHeader(a1, v1, v4, v43);
        if ( v5 > 0 )
        {
          DyesColorMappingTable = CreateDyesColorMappingTable(a1);
          v7 = DyesColorMappingTable;
          if ( DyesColorMappingTable <= 0 )
          {
LABEL_99:
            EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
LABEL_31:
            EngFreeMem(*(PVOID *)(v4 + 304));
            EngFreeMem(*(PVOID *)(v4 + 312));
            return v7;
          }
          v8 = *(_DWORD *)(v4 + 444);
          v9 = *(_DWORD *)v4;
          v44 = *(_BYTE *)(v2 + 31);
          v42 = *(_QWORD *)(v4 + 136);
          v46 = 1;
          v10 = *(_DWORD *)(*(_QWORD *)(v4 + 304) + 4LL);
          v41 = 0LL;
          v11 = *(_DWORD *)(v2 + 56) & 0x2000000;
          if ( v11 )
            v41 = (void *)(v1 + 548);
          if ( v9 < 0 )
          {
            v46 = 0;
            if ( (v9 & 0x800) != 0 )
            {
              v21 = *(_QWORD *)(v1 + 7064);
              *(_QWORD *)(v4 + 336) = v21;
              if ( (v9 & 0x1000) != 0 )
                *(_QWORD *)(v4 + 336) = v21 + 768;
            }
          }
          else
          {
            v12 = *(_QWORD *)(v4 + 376);
            v13 = v1 + 856;
            v14 = 24LL;
            do
            {
              *(_OWORD *)v12 = *(_OWORD *)v13;
              *(_OWORD *)(v12 + 16) = *(_OWORD *)(v13 + 16);
              *(_OWORD *)(v12 + 32) = *(_OWORD *)(v13 + 32);
              *(_OWORD *)(v12 + 48) = *(_OWORD *)(v13 + 48);
              *(_OWORD *)(v12 + 64) = *(_OWORD *)(v13 + 64);
              *(_OWORD *)(v12 + 80) = *(_OWORD *)(v13 + 80);
              *(_OWORD *)(v12 + 96) = *(_OWORD *)(v13 + 96);
              v12 += 128LL;
              v15 = *(_OWORD *)(v13 + 112);
              v13 += 128LL;
              *(_OWORD *)(v12 - 16) = v15;
              --v14;
            }
            while ( v14 );
            *(_OWORD *)v12 = *(_OWORD *)v13;
            *(_QWORD *)(v12 + 16) = *(_QWORD *)(v13 + 16);
            *(_DWORD *)(v12 + 24) = *(_DWORD *)(v13 + 24);
            if ( (v9 & 0x800) != 0 )
            {
              v22 = *(_OWORD **)(v1 + 7064);
              v23 = *(_OWORD **)(v4 + 336);
              if ( (v9 & 0x1000) != 0 )
              {
                v24 = v22 + 48;
                v25 = 16LL;
                do
                {
                  *v23 = *v24;
                  v23[1] = v24[1];
                  v23[2] = v24[2];
                  v23[3] = v24[3];
                  v23[4] = v24[4];
                  v23[5] = v24[5];
                  v23[6] = v24[6];
                  v23 += 8;
                  v26 = v24[7];
                  v24 += 8;
                  *(v23 - 1) = v26;
                  --v25;
                }
                while ( v25 );
              }
              else
              {
                v27 = 6LL;
                do
                {
                  *v23 = *v22;
                  v23[1] = v22[1];
                  v23[2] = v22[2];
                  v23[3] = v22[3];
                  v23[4] = v22[4];
                  v23[5] = v22[5];
                  v23[6] = v22[6];
                  v23 += 8;
                  v28 = v22[7];
                  v22 += 8;
                  *(v23 - 1) = v28;
                  --v27;
                }
                while ( v27 );
              }
            }
            EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
          }
          if ( (*(_BYTE *)(v4 + 8) & 4) != 0 )
            SetGrayColorTable(*(_QWORD *)(v4 + 384));
          if ( *(_DWORD *)(v4 + 528) )
            InitializeFUDI(v4);
          v16 = v44;
          *(_QWORD *)(v4 + 560) -= 4LL;
          if ( v44 > 0xF9u )
          {
            if ( v44 == 250 )
            {
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_B332;
              v34 = v11 == 0;
              v35 = OutputAATo8BPP_B332_XLATE;
LABEL_94:
              if ( !v34 )
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v35;
              goto LABEL_96;
            }
            if ( v44 == 251 )
            {
              BYTE1(v41) = *(_BYTE *)(*(_QWORD *)(v4 + 376) + 17LL);
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_MONO;
LABEL_96:
              v7 = DyesColorMappingTable;
              goto LABEL_25;
            }
            if ( v44 <= 0xFBu )
              goto LABEL_91;
            if ( v44 <= 0xFDu )
            {
              if ( (v42 & 3) != 0 )
              {
                LOBYTE(v41) = 1;
                LOBYTE(v10) = v10 - 1;
              }
              if ( (v10 & 1) != 0 )
              {
                *(_QWORD *)(v4 + 568) -= 4LL;
                BYTE3(v41) = 1;
              }
              if ( (_BYTE)v8 )
              {
                v7 = DyesColorMappingTable;
                if ( (_BYTE)v8 != 4 )
                {
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_ExtBGR;
                  goto LABEL_25;
                }
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_555_BGR;
                v19 = v44 == 0xFD;
                v18 = OutputAATo16BPP_565_BGR;
                goto LABEL_23;
              }
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_RGB;
              v29 = v44 == 0xFD;
              v30 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo16BPP_555_RGB;
              goto LABEL_52;
            }
            if ( v44 == 254 )
            {
              v36 = a1[7];
              if ( v36 )
              {
                v16 = *(_QWORD *)(v4 + 400);
                v37 = (void *)v16;
                if ( v16 )
                {
                  v38 = (unsigned __int8 *)&VGA256Xlate;
                  LODWORD(v6) = 366;
                  do
                  {
                    v39 = *v38++;
                    *(_BYTE *)v16++ = *(_BYTE *)(v39 + v36);
                    v19 = (_DWORD)v6 == 1;
                    v6 = (unsigned int)(v6 - 1);
                  }
                  while ( !v19 );
                }
                LOBYTE(v16) = v44;
              }
              else
              {
                v37 = &VGA256Xlate;
              }
              v41 = v37;
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA256;
              goto LABEL_96;
            }
          }
          else
          {
            if ( v44 >= 0xF8u )
              goto LABEL_63;
            switch ( v44 )
            {
              case 5u:
                v7 = DyesColorMappingTable;
                *(_WORD *)((char *)&v41 + 1) = v8 >> 8;
                BYTE3(v41) = HIBYTE(v8);
                LOBYTE(v41) = v8;
                if ( !(_BYTE)v8 )
                {
                  v17 = OutputAATo24BPP_RGB;
                  goto LABEL_25;
                }
                v17 = OutputAATo24BPP_BGR;
                v18 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo24BPP_ORDER;
                goto LABEL_22;
              case 6u:
                v7 = DyesColorMappingTable;
                *(_WORD *)((char *)&v41 + 1) = v8 >> 8;
                BYTE3(v41) = HIBYTE(v8);
                LOBYTE(v41) = v8;
                if ( !(_BYTE)v8 )
                {
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo32BPP_RGB;
                  goto LABEL_25;
                }
                v17 = OutputAATo32BPP_BGR;
                v18 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo32BPP_ORDER;
LABEL_22:
                v19 = (_BYTE)v8 == 4;
LABEL_23:
                if ( !v19 )
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v18;
LABEL_25:
                *(_QWORD *)(v4 + 272) = v17;
                if ( v17 )
                {
                  v19 = (*(_DWORD *)v4 & 0x800) == 0;
                  *(_QWORD *)(v4 + 280) = v41;
                  if ( !v19 )
                  {
                    LOBYTE(v6) = v8;
                    GetDstBFInfo(v4, *(_QWORD *)(a1[2] + 8), v16, v6);
                  }
                  v7 = v43[0](v4);
                }
                if ( (v9 & 0x18) != 0 )
                {
                  v40 = *(_QWORD *)(v4 + 392);
                  if ( v40 )
                    FindBGRMapCache(v40, 0LL);
                }
                if ( v46 )
                  goto LABEL_31;
                goto LABEL_99;
              case 1u:
                v31 = *(unsigned __int8 *)(v4 + 97);
                BYTE1(v41) = -((v9 & 4) == 0);
                if ( *(_BYTE *)(v4 + 97) )
                {
                  v32 = 8 - v31;
                  v10 -= 8 - v31;
                  if ( v10 < 0 )
                  {
                    v32 += v10;
                    BYTE2(v41) = -(char)v10;
                    LOBYTE(v10) = 0;
                  }
                  LOBYTE(v41) = v32;
                }
                v33 = v10 & 7;
                BYTE3(v41) = v33;
                if ( v33 )
                  *(_QWORD *)(v4 + 568) += -4LL * v33;
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo1BPP;
                goto LABEL_96;
            }
            if ( v44 != 2 )
            {
              if ( v44 > 0xF4u )
              {
                if ( v44 > 0xF6u )
                {
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_B332_XLATE;
                  v29 = v11 == 0;
                  v30 = OutputAATo8BPP_K_B332;
LABEL_52:
                  if ( v29 )
                    v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v30;
                  goto LABEL_96;
                }
LABEL_63:
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_XLATE;
                v41 = *(&p8BPPXlate + *(unsigned __int8 *)(*(_QWORD *)(v4 + 376) + 16LL));
                if ( (unsigned __int8)(v44 + 8) > 1u )
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_XLATE;
                goto LABEL_96;
              }
LABEL_91:
              v17 = 0LL;
              v7 = -11;
              goto LABEL_25;
            }
          }
          BYTE1(v41) = (v9 & 4) == 0 ? 0x77 : 0;
          if ( *(_BYTE *)(v4 + 97) )
          {
            LOBYTE(v41) = 1;
            LOBYTE(v10) = v10 - 1;
          }
          if ( (v10 & 1) != 0 )
          {
            *(_QWORD *)(v4 + 568) -= 4LL;
            BYTE3(v41) = 1;
          }
          v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo4BPP;
          v34 = v44 == 2;
          v35 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, __int64))OutputAAToVGA16;
          goto LABEL_94;
        }
      }
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
  return (unsigned int)v5;
}
