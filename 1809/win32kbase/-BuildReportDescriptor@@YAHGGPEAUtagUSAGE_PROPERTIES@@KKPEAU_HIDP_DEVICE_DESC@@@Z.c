/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C0120390
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C0120AE4 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0120C20 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C011FFE4 (-BuildDeviceHeader@@YAHPEAEKPEAKGG@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C0120058 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 */

__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        int a5,
        struct _HIDP_DEVICE_DESC *a6)
{
  __int128 v6; // xmm0
  struct tagUSAGE_PROPERTIES *v7; // r15
  __int128 v8; // xmm1
  unsigned int v10; // ebx
  char v11; // si
  int v12; // r8d
  char v13; // r12
  bool v14; // zf
  int v15; // edx
  int v16; // eax
  unsigned int v17; // r13d
  unsigned __int8 *v18; // rax
  unsigned __int8 *v19; // rdi
  unsigned int v20; // eax
  unsigned int v21; // r12d
  struct tagUSAGE_PROPERTIES *v22; // r14
  __int128 v23; // xmm1
  unsigned int v24; // edx
  unsigned int v25; // r12d
  unsigned int v26; // eax
  unsigned int v27; // r14d
  unsigned int v28; // ebx
  char v29; // si
  unsigned int v30; // r14d
  unsigned int v31; // eax
  __int128 v32; // xmm1
  unsigned int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // edx
  int v38; // eax
  __int64 v40; // [rsp+28h] [rbp-51h]
  unsigned int v41; // [rsp+40h] [rbp-39h] BYREF
  int v42; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v43; // [rsp+48h] [rbp-31h]
  unsigned int v44; // [rsp+4Ch] [rbp-2Dh]
  _OWORD v45[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v46; // [rsp+70h] [rbp-9h] BYREF
  __int128 v47; // [rsp+80h] [rbp+7h]
  unsigned int v48; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v49; // [rsp+E8h] [rbp+6Fh]

  v49 = a4;
  v6 = *(_OWORD *)a3;
  v48 = 0;
  v7 = a3;
  v8 = *((_OWORD *)a3 + 1);
  v41 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 1;
  v42 = 1;
  v13 = a2;
  v45[0] = v6;
  v45[1] = v8;
  v14 = a5 == 0;
  if ( a5 )
    goto LABEL_7;
  if ( a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v14 = 1;
LABEL_7:
    if ( !v14 )
      v12 = a5;
    a5 = v12;
    if ( 35 * (unsigned __int64)(a4 * v12) > 0xFFFFFFFF )
      return 0LL;
    v15 = 35 * a4 * v12;
    v16 = v12 + 13;
    goto LABEL_11;
  }
  if ( 35 * (unsigned __int64)a4 > 0xFFFFFFFF )
    return 0LL;
  v15 = 35 * a4;
  a5 = 1;
  v16 = 23;
LABEL_11:
  v17 = v16 + v15;
  if ( !(v16 + v15) )
    return 0LL;
  v18 = (unsigned __int8 *)Win32AllocPoolZInit(v17, 0x78707355u);
  v19 = v18;
  if ( v18 )
  {
    BuildDeviceHeader(v18, v17, &v48, a1, v13);
    v20 = v49;
    v21 = 0;
    if ( v49 )
    {
      v22 = v7;
      do
      {
        if ( *(_WORD *)v22 == 1 )
        {
          v23 = *((_OWORD *)v22 + 1);
          v46 = *(_OWORD *)v22;
          v47 = v23;
          v10 = BuildMainItem(v19, v17, &v48, &v46, (__int64)v45, v40, &v42, &v41);
          if ( !v10 )
            goto LABEL_41;
          v11 += v41;
          v20 = v49;
        }
        ++v21;
        v22 = (struct tagUSAGE_PROPERTIES *)((char *)v22 + 32);
      }
      while ( v21 < v20 );
      if ( v10 )
      {
        v24 = v48;
        v25 = 0;
        v26 = a5;
        v43 = v48;
        v27 = v48 + 1;
        v19[v48] = -64;
        v48 = v27;
        v44 = v26 - 1;
        if ( v26 != 1 )
        {
          do
          {
            if ( !v10 )
              break;
            if ( v24 <= gulCollectionOffset || (v28 = v24 - gulCollectionOffset + 1, v17 - v27 <= v28) )
            {
              v10 = 0;
            }
            else
            {
              memmove(&v19[v27], &v19[gulCollectionOffset], v28);
              v24 = v43;
              v27 += v28;
              v10 = 1;
            }
            ++v25;
          }
          while ( v25 < v44 );
          LOBYTE(v26) = a5;
          v48 = v27;
        }
        v29 = v26 * v11;
        v30 = 0;
        v31 = v49;
        do
        {
          if ( !*(_WORD *)v7 )
          {
            v32 = *((_OWORD *)v7 + 1);
            v46 = *(_OWORD *)v7;
            v47 = v32;
            v10 = BuildMainItem(v19, v17, &v48, &v46, (__int64)v45, v40, &v42, &v41);
            if ( !v10 )
              goto LABEL_41;
            v29 += v41;
            v31 = v49;
          }
          ++v30;
          v7 = (struct tagUSAGE_PROPERTIES *)((char *)v7 + 32);
        }
        while ( v30 < v31 );
        if ( v10 )
        {
          if ( (v29 & 7) != 0 )
          {
            v33 = v48;
            v19[v48] = 117;
            v19[v33 + 1] = 8 - (v29 & 7);
            v34 = v33 + 2;
            v19[v34] = -107;
            v35 = (unsigned int)(v34 + 1);
            v19[v35] = 1;
            v36 = (unsigned int)(v35 + 1);
            v19[v36] = -127;
            LODWORD(v36) = v36 + 1;
            v19[(unsigned int)v36] = 3;
            v37 = v36 + 1;
          }
          else
          {
            v37 = v48;
          }
          v19[v37] = -64;
          if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
            v38 = ((__int64 (__fastcall *)(unsigned __int8 *, _QWORD, __int64, struct _HIDP_DEVICE_DESC *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
                    v19,
                    v37 + 1,
                    1LL,
                    a6);
          else
            v38 = -1073741637;
          v10 = v38 >= 0;
        }
      }
    }
LABEL_41:
    Win32FreePool((__int64)v19);
  }
  return v10;
}
