/*
 * XREFs of ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C00556B0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C000BA4C (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C0055A00 (ACPIIoctlEvalPostProcessingV2.c)
 */

void __fastcall ACPIIoctlAsyncEvalControlMethodCompletion(__int64 a1, int a2, void *a3, IRP *a4)
{
  void *v5; // rdi
  int v6; // esi
  int v7; // eax
  char v8; // r8

  v5 = a3;
  v6 = a2;
  if ( a2 >= 0 )
  {
    if ( a4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 3325952 )
    {
      v8 = 0;
    }
    else
    {
      if ( a4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 3325980 )
      {
        if ( a4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 3326016 )
        {
          a3 = 0LL;
        }
        else
        {
          if ( a4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 3326024 )
          {
LABEL_13:
            dword_1C0080868 = 0;
            pszDest = 0;
            FreeDataBuffs((__int64)v5, 1u);
            goto LABEL_14;
          }
          LOBYTE(a3) = 1;
        }
        v7 = ACPIIoctlEvalPostProcessingV2(a4, v5, a3);
LABEL_12:
        v6 = v7;
        goto LABEL_13;
      }
      v8 = 1;
    }
    v7 = ACPIIoctlEvalPostProcessingV1(a4, (__int64)v5, v8);
    goto LABEL_12;
  }
LABEL_14:
  ExFreePoolWithTag(v5, 0);
  a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a4->IoStatus.Status = v6;
  IofCompleteRequest(a4, 0);
}
