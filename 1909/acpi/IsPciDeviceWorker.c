/*
 * XREFs of IsPciDeviceWorker @ 0x1C0022520
 * Callers:
 *     IsPciDevice @ 0x1C00237B0 (IsPciDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     PciConfigInternal @ 0x1C00228A4 (PciConfigInternal.c)
 *     IsPciBusAsync @ 0x1C0023B40 (IsPciBusAsync.c)
 *     ACPIConvertStringDelimitation @ 0x1C0027BF4 (ACPIConvertStringDelimitation.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsPciDeviceWorker(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 *v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbp
  int v17; // eax
  __int64 *v18; // rdx
  int v19; // eax
  __int64 v21; // r14
  __int64 *v22; // rbp
  __int64 *v23; // rcx
  __int64 *v24; // rbp
  int v25; // eax
  volatile signed __int32 *v26; // rax
  __int64 v27; // rbp
  unsigned int v28; // edi
  void *v29; // rcx
  void *v30; // rcx
  _BYTE *v31; // rax
  char v32; // al
  _BYTE *v33; // rax

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 9);
  v7 = (__int64 *)*a4;
  if ( !*a4 || *(_WORD *)(*v7 + 66) != 6 || a2 < 0 || (v8 = *(_QWORD *)(*v7 + 104)) == 0 )
  {
    v33 = (_BYTE *)a4[7];
LABEL_61:
    *v33 = 0;
    goto LABEL_38;
  }
  if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) == 0 )
  {
    v9 = *((_DWORD *)a4 + 2);
    if ( (v9 & 1) == 0 )
    {
      v21 = (__int64)(a4 + 2);
      *((_DWORD *)a4 + 2) = v9 | 1;
      a4[2] = 0LL;
      v22 = AMLIGetNamedChild(v7, 1145653343);
      if ( v22 )
      {
        v6 = ACPIGet((__int64 *)*a4, 1145653343, 738722310, 0LL, 0, (__int64)&IsPciDeviceWorker, (__int64)a4, v21, 0LL);
        AMLIDereferenceHandleEx((volatile signed __int32 *)v22);
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_60;
      }
    }
    v10 = (const char *)a4[2];
    if ( v10 )
    {
      if ( strstr(v10, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
      {
        _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[2], 0LL) )
          ExFreePoolWithTag((PVOID)a4[2], 0);
        _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x21u);
        a4[2] = 0LL;
LABEL_72:
        v31 = (_BYTE *)a4[7];
        goto LABEL_50;
      }
      ExFreePoolWithTag((PVOID)a4[2], 0);
      a4[2] = 0LL;
    }
    v11 = *((_DWORD *)a4 + 2);
    if ( (v11 & 0x80u) == 0 )
    {
      v23 = (__int64 *)*a4;
      a4[3] = 0LL;
      *((_DWORD *)a4 + 2) = v11 | 0x80;
      v24 = AMLIGetNamedChild(v23, 1145652063);
      if ( v24 )
      {
        v6 = ACPIGet(
               (__int64 *)*a4,
               1145652063,
               738722055,
               0LL,
               0,
               (__int64)&IsPciDeviceWorker,
               (__int64)a4,
               (__int64)(a4 + 3),
               0LL);
        AMLIDereferenceHandleEx((volatile signed __int32 *)v24);
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_60;
      }
    }
    if ( !a4[3] )
    {
LABEL_10:
      v12 = *((_DWORD *)a4 + 2);
      if ( (v12 & 8) == 0 )
      {
        *((_DWORD *)a4 + 2) = v12 | 8;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) != 0 )
        {
          *((_DWORD *)a4 + 3) = *(_DWORD *)(v8 + 92);
        }
        else
        {
          v25 = ACPIGet(
                  (__int64 *)*a4,
                  1380204895,
                  -1543240702,
                  0LL,
                  0,
                  (__int64)&IsPciDeviceWorker,
                  (__int64)a4,
                  (__int64)a4 + 12,
                  0LL);
          v6 = v25;
          if ( v25 == 259 )
            return 259LL;
          if ( v25 < 0 )
            goto LABEL_60;
        }
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) == 0 )
      {
        _InterlockedExchange((volatile __int32 *)(v8 + 92), *((_DWORD *)a4 + 3));
        _InterlockedOr((volatile signed __int32 *)(v8 + 88), 0x80u);
      }
      v13 = *((_DWORD *)a4 + 2);
      if ( (v13 & 0x20) != 0 )
        goto LABEL_90;
      v14 = (__int64 *)*a4;
      *((_DWORD *)a4 + 2) = v13 | 0x20;
      v15 = AMLIGetParent((__int64)v14);
      v16 = (volatile signed __int32 *)v15;
      if ( v15 )
      {
        v6 = IsPciBusAsync(v15, &IsPciDeviceWorker, a4, a4 + 4);
        AMLIDereferenceHandleEx(v16);
      }
      else
      {
        v6 = -1073741661;
      }
      if ( v6 == 259 )
        return 259LL;
      if ( v6 >= 0 )
      {
LABEL_90:
        if ( *((_BYTE *)a4 + 32) )
        {
          v17 = *((_DWORD *)a4 + 2);
          if ( (v17 & 0x40) != 0 )
            goto LABEL_29;
          v18 = (__int64 *)*a4;
          *((_DWORD *)a4 + 2) = v17 | 0x40;
          v19 = PciConfigInternal(0, (_DWORD)v18, 0, 15, (__int64)&IsPciDeviceWorker, (__int64)a4, (__int64)(a4 + 8));
          v6 = v19;
          if ( v19 == 259 )
            return 259LL;
          if ( v19 >= 0 )
          {
LABEL_29:
            if ( (*((_BYTE *)a4 + 78) & 0x7Fu) - 1 <= 1 )
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
              if ( *((_WORD *)a4 + 32) == 0xFFFF
                || *((_WORD *)a4 + 33) == 0xFFFF
                || (v32 = *((_BYTE *)a4 + 78), v32 == -1)
                || *((_BYTE *)a4 + 75) == 0xFF
                || *((_BYTE *)a4 + 74) == 0xFF
                || *((_BYTE *)a4 + 73) == 0xFF )
              {
                *((_DWORD *)a4 + 2) &= ~0x40u;
              }
              else
              {
                *(_BYTE *)(v8 + 96) = v32;
              }
            }
            else
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x100000000uLL);
              v5 = 1;
            }
            *(_BYTE *)a4[7] = 1;
            v26 = (volatile signed __int32 *)AMLIGetParent(*a4);
            if ( v26 )
            {
              v27 = *(_QWORD *)(*(_QWORD *)v26 + 104LL);
              AMLIDereferenceHandleEx(v26);
            }
            else
            {
              v27 = 0LL;
            }
            if ( v27 )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v27 + 184), 0, 0) & 1) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)(v8 + 88), 2u);
                if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                  _InterlockedOr64((volatile signed __int64 *)(v8 + 952), 0x8000uLL);
              }
              goto LABEL_38;
            }
          }
        }
      }
LABEL_60:
      v33 = (_BYTE *)a4[7];
      goto LABEL_61;
    }
    ACPIConvertStringDelimitation();
    if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
    {
      ExFreePoolWithTag((PVOID)a4[3], 0);
      a4[3] = 0LL;
      goto LABEL_10;
    }
    _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[3], 0LL) )
      ExFreePoolWithTag((PVOID)a4[3], 0);
    _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x41u);
    a4[3] = 0LL;
    goto LABEL_72;
  }
  v31 = (_BYTE *)a4[7];
LABEL_50:
  *v31 = 1;
LABEL_38:
  v28 = 0;
  if ( v6 != -1073741772 )
    v28 = v6;
  if ( *((_DWORD *)a4 + 9) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[5])(*a4, v28, 0LL, a4[6]);
  v29 = (void *)a4[2];
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  v30 = (void *)a4[3];
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( *a4 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)*a4);
  ExFreePoolWithTag(a4, 0x46706341u);
  return v28;
}
